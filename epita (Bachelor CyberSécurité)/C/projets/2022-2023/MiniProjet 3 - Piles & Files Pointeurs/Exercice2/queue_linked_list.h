#ifndef QUEUE_LINKED_LIST_H_
# define QUEUE_LINKED_LIST_H_

/*
** !!! TODO: Declare here the structure representing the elements of the
** linked list !!!
*/

/*
** !!! TODO: Declare here the "queue_ll" structure !!!
** Don't forget the typedef for the queue_ll
*/

/* Create a queue */
queue_ll *queue_ll_create(void);

/* Destroy the queue / Free the structure from memory */
void queue_ll_delete(queue_ll *queue);

/* Get the length of the queue (how many elements it contains) */
int queue_ll_length(queue_ll *queue);

/* Enqueue an integer in the queue */
int queue_ll_enqueue(int elt, queue_ll *queue);

/* Dequeue an integer from the queue */
int queue_ll_dequeue(queue_ll *queue);

/* Get the element on the head of the queue */
int queue_ll_head(queue_ll *queue);

/* Get the element on the tail of the queue */
int queue_ll_tail(queue_ll *queue);

/* Clear the queue from its elements */
int queue_ll_clear(queue_ll *queue);

/* Test if the queue is empty or not */
int queue_ll_is_empty(queue_ll *queue);

/* Add an element 'elt' at the position 'pos', or add it at the tail */
int queue_ll_insert(int elt, int pos, queue_ll *queue);

/* Replace an element 'elt' at the position 'pos', or add it at the tail */
int queue_ll_replace(int elt, int pos, queue_ll *queue);

/* Search for an element within the queue */
int queue_ll_search(int elt, queue_ll *queue);

/* Reverse the order of the elements in the queue */
queue_ll *queue_ll_reverse(queue_ll *queue);

/* Print the content of the queue */
void queue_ll_print(queue_ll *queue);

#endif /* !QUEUE_LINKED_LIST_H_ */
