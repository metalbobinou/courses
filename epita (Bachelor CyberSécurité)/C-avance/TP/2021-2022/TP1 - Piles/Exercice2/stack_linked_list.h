#ifndef STACK_LINKED_LIST_H_
# define STACK_LINKED_LIST_H_

/*
** !!! TODO: Declare here the structure representing the elements of the
** linked list !!!
*/

/*
** !!! TODO: Declare here the "stack_ll" structure !!!
** Don't forget the typedef for the stack_ll
*/

/* Create a stack */
stack_ll *stack_ll_create(void);

/* Destroy the stack / Free the structure from memory */
void stack_ll_delete(stack_ll *stack);

/* Get the length of the stack (how many elements it contains) */
int stack_ll_length(stack_ll *stack);

/* Push an integer on the stack */
int stack_ll_push(int elt, stack_ll *stack);

/* Pop an integer from the stack */
int stack_ll_pop(stack_ll *stack);

/* Get the element on the head of the stack */
int stack_ll_head(stack_ll *stack);

/* Clear the stack from its elements */
int stack_ll_clear(stack_ll *stack);

/* Test if the stack is empty or not */
int stack_ll_is_empty(stack_ll *stack);

/* Search for an element within the stack */
int stack_ll_search(int elt, stack_ll *stack);

/* Reverse the order of the elements in the stack */
stack_ll *stack_ll_reverse(stack_ll *stack);

/* Print the content of the stack */
void stack_ll_print(stack_ll *stack);

#endif /* !STACK_LINKED_LIST_H_ */
