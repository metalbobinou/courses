#ifndef STACK_STATIC_H_
# define STACK_STATIC_H_

/* !!! TODO: Declare here the fixed lenght STACK_STATIC_MAX_LEN !!! */
# define STACK_STATIC_MAX_LEN 42

/*
** !!! TODO: Declare here the "stack_static" structure !!!
** Don't forget: the array MUST BE static !
*/
struct stack_static
{
  int length;
  int array[STACK_STATIC_MAX_LEN];
  int head;
};

typedef struct stack_static stack_static;

/* !!! TODO: Declare here the global structure: g_s_stack_static !!! */
static stack_static g_s_stack_static;

/* !!! TODO: Declare here the global pointer: g_stack_static !!! */
stack_static *g_stack_static = &g_s_stack_static;


/* Initialize the different values of the structure */
void stack_static_create(void);

/* Just empty the array */
void stack_static_delete(void);

/* Get the maximum length of the stack (how many cells the array has) */
int stack_static_max_length(void);

/* Get the length of the stack (how many elements it contains) */
int stack_static_length(void);

/* Push an integer on the stack */
int stack_static_push(int elt);

/* Pop an integer from the stack */
int stack_static_pop(void);

/* Get the element on the head of the stack */
int stack_static_head(void);

/* Clear the stack from its elements */
int stack_static_clear(void);

/* Test if the stack is empty or not */
int stack_static_is_empty(void);

/* Search for an element within the stack */
int stack_static_search(int elt);

/* Reverse the order of the elements in the stack */
void stack_static_reverse(void);

/* Print the content of the stack */
void stack_static_print(void);

#endif /* !STACK_STATIC_H_ */
