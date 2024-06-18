-include Makefile.rules

all: compile-list compile-stack compile-queue compile-full


clean:
	rm -f test
	rm -f test-list_linked
	rm -f test-stack_linked
	rm -f test-queue_linked
	rm -f Makefile.rules
	rm -f *~


list: compile-list

compile-list:
	gcc -o test-list_linked $(CFLAGS) \
	main-list_linked.c test_funs.c \
	list_linked_test_1.c list_linked_test_2.c list_linked_test_3.c \
	list_linked_test_4.c \
	libmylpf.a

stack: compile-stack

compile-stack:
	gcc -o test-stack_linked $(CFLAGS) \
	main-stack_linked.c test_funs.c \
	stack_linked_test_1.c stack_linked_test_2.c stack_linked_test_3.c \
	stack_linked_test_4.c \
	libmylpf.a

queue: compile-queue

compile-queue:
	gcc -o test-queue_linked $(CFLAGS) \
	main-queue_linked.c test_funs.c \
	queue_linked_test_1.c queue_linked_test_2.c queue_linked_test_3.c \
	queue_linked_test_4.c \
	libmylpf.a

full: compile-full

compile-full:
	gcc -o test \
	main.c test_funs.c $(CFLAGS) \
	list_linked_test_1.c list_linked_test_2.c list_linked_test_3.c \
	list_linked_test_4.c \
	stack_linked_test_1.c stack_linked_test_2.c stack_linked_test_3.c \
	stack_linked_test_4.c \
	queue_linked_test_1.c queue_linked_test_2.c queue_linked_test_3.c \
	queue_linked_test_4.c \
	libmylpf.a
