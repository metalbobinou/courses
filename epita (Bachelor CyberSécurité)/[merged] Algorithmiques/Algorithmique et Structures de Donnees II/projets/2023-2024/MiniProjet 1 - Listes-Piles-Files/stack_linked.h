#ifndef STACK_LINKED_H_
# define STACK_LINKED_H_

# include "list_linked.h"

/* Prototypes of functions that manages a stack above list_linked structure */

list_linked *push_stack_linked(list_linked *list,
			       int elt);
list_linked *pop_stack_linked(list_linked *list);

int length_stack_linked(list_linked *list);
int is_empty_stack_linked(list_linked *list);

void print_stack_linked(list_linked *list);

int get_head_stack_linked(list_linked *list);

int clear_stack_linked(list_linked *list);

#endif /* !STACK_LINKED_H_ */
