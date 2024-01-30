#ifndef QUEUE_LINKED_LIST_H_
#define QUEUE_LINKED_LIST_H_

#include "bt_basics.h"

struct elt_queue_ll
{
    struct bt_p *elt;
    struct elt_queue_ll *next;
};

struct queue_ll
{
    int len;
    struct elt_queue_ll *head;
    struct elt_queue_ll *tail;
};
typedef struct queue_ll queue_ll;

queue_ll *queue_ll_create(void);
void queue_ll_delete(queue_ll *queue);
int queue_ll_enqueue(bt_p *elt, queue_ll *queue);
int queue_ll_dequeue(queue_ll *queue);
bt_p *queue_ll_head(queue_ll *queue);
bt_p *queue_ll_tail(queue_ll *queue);
int queue_ll_clear(queue_ll *queue);
int queue_ll_is_empty(queue_ll *queue);

#endif
