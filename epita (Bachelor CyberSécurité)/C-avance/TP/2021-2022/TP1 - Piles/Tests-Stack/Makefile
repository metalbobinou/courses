-include Makefile.rules

OUTDIR=Tests-MyStack

SRC_LL=main_ll_1_NULL.c \
	main_ll_2_empty.c \
	main_ll_3_regular.c \
	main_ll_4_hard.c
SRC_ARRAY=main_array_1_NULL.c \
	main_array_2_empty.c \
	main_array_3_regular.c \
	main_array_4_hard.c
SRC_STATIC=main_static_1_empty.c \
	main_static_2_regular.c \
	main_static_3_hard.c

HEADERS=stacks.h \
	tests_array.h \
	tests_ll.h \
	tests_static.h
	#stack_array.h \
	#stack_linked_list.h \
	#stack_static.h \

OBJS_LL=${SRC_LL:.c=.o}
OBJS_ARRAY=${SRC_ARRAY:.c=.o}
OBJS_STATIC=${SRC_STATIC:.c=.o}

BIN_LL=${SRC_LL:.c=.exe}
BIN_ARRAY=${SRC_ARRAY:.c=.exe}
BIN_STATIC=${SRC_STATIC:.c=.exe}

all: linkedlist array static

ll: linkedlist

linkedlist: $(BIN_LL)

array: $(BIN_ARRAY)

static: $(BIN_STATIC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.exe: %.o
	$(CC) $< -L. -lmystack -static -o $@

clean:
	rm -f *~
	find . -name "*~" -delete

distclean: clean
	rm -f $(OBJS_LL) $(OBJS_ARRAY) $(OBJS_STATIC)
	rm -f $(BIN_LL) $(BIN_ARRAY) $(BIN_STATIC)
	rm -f Makefile.rules
	rm -f $(OUTDIR).tar.bz2

dist: distclean
	mkdir $(OUTDIR)
	cp -f AUTHORS README configure Makefile $(OUTDIR)
	cp -f $(SRC_LL) $(SRC_ARRAY) $(SRC_STATIC) $(HEADERS) $(OUTDIR)
	tar cvjf $(OUTDIR).tar.bz2 $(OUTDIR)
	rm -rf $(OUTDIR)

check:
	(cd check && ./check.sh)

.PHONY:	check
