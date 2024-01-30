#ifndef QUEUE_STATIC_H_
# define QUEUE_STATIC_H_

/* !!! TODO: Declare here the fixed lenght QUEUE_STATIC_MAX_LEN !!! */
# define QUEUE_STATIC_MAX_LEN 42

/*
** !!! TODO: Declare here the "queue_static" structure !!!
** Don't forget: the array MUST BE static !
*/
struct queue_static
{
  int length;
  int array[QUEUE_STATIC_MAX_LEN];
  int head;
  int tail;
};

typedef struct queue_static queue_static;

/* !!! TODO: Declare here the global structure: g_s_queue_static !!! */
static queue_static g_s_queue_static;

/* !!! TODO: Declare here the global pointer: g_queue_static !!! */
queue_static *g_queue_static = &g_s_queue_static;


/* Initialize the different values of the structure */
void queue_static_create(void);

/* Just empty the array */
void queue_static_delete(void);

/* Get the maximum length of the queue (how many cells the array has) */
int queue_static_max_length(void);

/* Get the length of the queue (how many elements it contains) */
int queue_static_length(void);

/* Push an integer on the queue */
int queue_static_enqueue(int elt);

/* Pop an integer from the queue */
int queue_static_dequeue(void);

/* Get the element on the head of the queue */
int queue_static_head(void);

/* Get the element on the head of the queue */
int queue_static_tail(void);

/* Clear the queue from its elements */
int queue_static_clear(void);

/* Test if the queue is empty or not */
int queue_static_is_empty(void);

/* Add an element 'elt' at the position 'pos', or add it at the tail */
int queue_static_insert(int elt, int pos);

/* Replace an element 'elt' at the position 'pos', or add it at the tail */
int queue_static_replace(int elt, int pos);

/* Search for an element within the queue */
int queue_static_search(int elt);

/* Reverse the order of the elements in the queue */
void queue_static_reverse(void);

/* Print the content of the queue */
void queue_static_print(void);

#endif /* !QUEUE_STATIC_H_ */
