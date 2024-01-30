CFLAGS=-W -Wall -Werror -std=c99 -pedantic

all: bt_basics bt_bst
	echo "-- End of Compilation--"

clean:
	rm -f main_bt_basics_1_NULL main_bt_basics_2_regular
	rm -f main_bt_bst_1_NULL main_bt_bst_2_regular main_bt_bst_3_optional


# Binary Trees & BST
bt_basics: main_bt_basics_1_NULL main_bt_basics_2_regular
	echo "BT Basics compilation ended  "

bt_bst: main_bt_bst_1_NULL main_bt_bst_2_regular main_bt_bst_3_optional
	echo "BT BST compilation ended  "


# BT Basics
main_bt_basics_1_NULL:
	gcc $(CFLAGS) -o main_bt_basics_1_NULL main_bt_basics_1_NULL.c libmybintree.a

main_bt_basics_2_regular:
	gcc $(CFLAGS) -o main_bt_basics_2_regular main_bt_basics_2_regular.c libmybintree.a


# BT BST
main_bt_bst_1_NULL:
	gcc $(CFLAGS) -o main_bt_bst_1_NULL main_bt_bst_1_NULL.c libmybintree.a

main_bt_bst_2_regular:
	gcc $(CFLAGS) -o main_bt_bst_2_regular main_bt_bst_2_regular.c libmybintree.a

main_bt_bst_3_optional:
	gcc $(CFLAGS) -o main_bt_bst_3_optional main_bt_bst_3_optional.c libmybintree.a
