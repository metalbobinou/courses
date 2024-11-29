#ifndef STACK_ARRAY_H_
# define STACK_ARRAY_H_

/* !!! TODO: Declare here the "stack_array" structure !!! */

/* Create a stack with max_length cells */
stack_array *stack_array_create(int max_length);

/* Destroy the stack / Free the structure from memory */
void stack_array_delete(stack_array *stack);

/* Get the maximum length of the stack (how many cells the array has) */
int stack_array_max_length(stack_array *stack);

/* Get the length of the stack (how many elements it contains) */
int stack_array_length(stack_array *stack);

/* Push an integer on the stack */
int stack_array_push(int elt, stack_array *stack);

/* Pop an integer from the stack */
int stack_array_pop(stack_array *stack);

/* Get the element on the head of the stack */
int stack_array_head(stack_array *stack);

/* Clear the stack from its elements */
int stack_array_clear(stack_array *stack);

/* Test if the stack is empty or not */
int stack_array_is_empty(stack_array *stack);

/* Search for an element within the stack */
int stack_array_search(int elt, stack_array *stack);

/* Reverse the order of the elements in the stack */
stack_array *stack_array_reverse(stack_array *stack);

/* Print the content of the stack */
void stack_array_print(stack_array *stack);

#endif /* !STACK_ARRAY_H_ */
