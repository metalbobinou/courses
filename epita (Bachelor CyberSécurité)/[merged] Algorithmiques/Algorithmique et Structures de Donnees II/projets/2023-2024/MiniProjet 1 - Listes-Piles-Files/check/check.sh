#! /bin/sh

gcc -o test-list_linked \
    main-list_linked.c test_funs.c \
    list_linked_test_1.c list_linked_test_2.c list_linked_test_3.c \
    list_linked_test_4.c \
    libmylpf.a

gcc -o test-stack_linked \
    main-stack_linked.c test_funs.c \
    stack_linked_test_1.c stack_linked_test_2.c stack_linked_test_3.c \
    stack_linked_test_4.c \
    libmylpf.a

gcc -o test-queue_linked \
    main-queue_linked.c test_funs.c \
    queue_linked_test_1.c queue_linked_test_2.c queue_linked_test_3.c \
    queue_linked_test_4.c \
    libmylpf.a

gcc -o test \
    main.c test_funs.c \
    list_linked_test_1.c list_linked_test_2.c list_linked_test_3.c \
    list_linked_test_4.c \
    stack_linked_test_1.c stack_linked_test_2.c stack_linked_test_3.c \
    stack_linked_test_4.c \
    queue_linked_test_1.c queue_linked_test_2.c queue_linked_test_3.c \
    queue_linked_test_4.c \
    libmylpf.a
