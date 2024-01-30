#ifndef QUEUE_ARRAY_H_
# define QUEUE_ARRAY_H_

/* !!! TODO: Declare here the "queue_array" structure !!! */
struct queue_array
{
  int length;
  int max_length;
  int *array;
  int head;
  int tail;
};

typedef struct queue_array queue_array;


/* Create a queue with max_length cells */
queue_array *queue_array_create(int max_length);

/* Destroy the queue / Free the structure from memory */
void queue_array_delete(queue_array *queue);

/* Get the maximum length of the queue (how many cells the array has) */
int queue_array_max_length(queue_array *queue);

/* Get the length of the queue (how many elements it contains) */
int queue_array_length(queue_array *queue);

/* Push an integer on the queue */
int queue_array_enqueue(int elt, queue_array *queue);

/* Pop an integer from the queue */
int queue_array_dequeue(queue_array *queue);

/* Get the element on the head of the queue */
int queue_array_head(queue_array *queue);

/* Get the element on the tail of the queue */
int queue_array_tail(queue_array *queue);

/* Clear the queue from its elements */
int queue_array_clear(queue_array *queue);

/* Test if the queue is empty or not */
int queue_array_is_empty(queue_array *queue);

/* Add an element 'elt' at the position 'pos', or add it at the tail */
int queue_array_insert(int elt, int pos, queue_array *queue);

/* Replace an element 'elt' at the position 'pos', or add it at the tail */
int queue_array_replace(int elt, int pos, queue_array *queue);

/* Search for an element within the queue */
int queue_array_search(int elt, queue_array *queue);

/* Reverse the order of the elements in the queue */
queue_array *queue_array_reverse(queue_array *queue);

/* Print the content of the queue */
void queue_array_print(queue_array *queue);

#endif /* !QUEUE_ARRAY_H_ */
