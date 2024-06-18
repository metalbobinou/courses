#ifndef QUEUE_LINKED_H_
# define QUEUE_LINKED_H_

# include "list_linked.h"

/* Prototypes of functions that manages a queue above list_linked structure */

list_linked *enqueue_queue_linked(list_linked *list,
				  int elt);
list_linked *dequeue_queue_linked(list_linked *list);

int length_queue_linked(list_linked *list);
int is_empty_queue_linked(list_linked *list);

void print_queue_linked(list_linked *list);

int get_head_queue_linked(list_linked *list);

int clear_queue_linked(list_linked *list);

#endif /* !QUEUE_LINKED_H_ */
