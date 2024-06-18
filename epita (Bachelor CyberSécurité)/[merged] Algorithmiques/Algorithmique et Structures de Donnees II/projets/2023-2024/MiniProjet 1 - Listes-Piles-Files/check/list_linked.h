#ifndef LIST_LINKED_H_
# define LIST_LINKED_H_

/* Structure list_linked */

typedef struct list_linked
{
  int                elt;
  struct list_linked *next;
} list_linked;


/* Prototypes of functions that manages list_linked structure */

list_linked *add_elt_list_linked(list_linked *list,
				 int elt,
				 int pos);
list_linked *del_elt_list_linked(list_linked *list,
				 int pos);

int length_list_linked(list_linked *list);
int is_empty_list_linked(list_linked *list);

void print_list_linked(list_linked *list);

int search_elt_list_linked(list_linked *list,
			   int elt);
int get_elt_list_linked(list_linked *list,
			int pos);

int clear_list_linked(list_linked *list);

#endif /* !LIST_LINKED_H_ */
