#ifndef LINKEDLIST_H_
# define LINKEDLIST_H_

/*
** !!! TODO: Declare here the structure representing the elements of the
** linked list !!!
*/



/*
** !!! TODO: Declare here the "my_linkedlist" structure !!!
** Don't forget the typedef for the my_linkedlist
*/





/* Create a linked list */
my_linkedlist *ll_create(void);

/* Destroy the linked list / Free the structure and elements from memory */
void ll_delete(my_linkedlist *ll);


/* Get the length of the linked list (how many elements it contains) */
int ll_length(my_linkedlist *ll);


/* Get the element on the head of the linked list */
int ll_head(my_linkedlist *ll);

/* Get the element on the tail of the linked list */
int ll_tail(my_linkedlist *ll);

/* Get the element at the position 'pos' of the linked list */
int ll_get(int pos, my_linkedlist *ll);


/* Clear the linked list from its elements */
int ll_clear(my_linkedlist *ll);

/* Test if the linked list is empty or not */
int ll_is_empty(my_linkedlist *ll);


/* Add an element 'elt' at the position 'pos', or add it at the head/tail */
int ll_insert(int elt, int pos, my_linkedlist *ll);

/* Replace an element 'elt' at the position 'pos', or add it at the head/tail */
int ll_replace(int elt, int pos, my_linkedlist *ll);

/* Remove an element 'elt' at the position 'pos' */
int ll_remove(int pos, my_linkedlist *ll);


/* Search for an element within the linked list */
int ll_search(int elt, my_linkedlist *ll);

/* Reverse the order of the elements in the linked list */
my_linkedlist *ll_reverse(my_linkedlist *ll);

/* Print the content of the linked list */
void ll_print(my_linkedlist *ll);

#endif /* !LINKEDLIST_H_ */
