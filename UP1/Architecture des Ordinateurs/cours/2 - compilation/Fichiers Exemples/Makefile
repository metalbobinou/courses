all:
	make preproc
	make preassemble
	make assemble
	make linkedit

preproc:
	gcc -E -P file.c -o file_out.c

preassemble:
	gcc -S file_out.c -o file_asm.s

assemble:
	gcc -c file_asm.s -o file.o
#	as file_asm.s -o file.o

linkedit:
#	gcc file.o -o programme.exe
#	ld file.o -o programme.exe
#	ld file.o -o programme.exe -lc --entry my_fun
	gcc -c main.c -o main.o
#	ld -o programme.exe file.o main.o -lc --entry main
	gcc -o programme.exe file.o main.o

help:
	echo "TARGET: preproc preassemble assemble linkedit"

clean:
	rm -f *~

distclean: clean
	rm -f file_out.c
	rm -f file_asm.s
	rm -f file.o
	rm -f main.o
	rm -f programme.exe
