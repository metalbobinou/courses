#include "queue_linked_list.h"

#include <stdlib.h>
#include <stdio.h>


queue_ll *queue_ll_create(void) {
    queue_ll *queue = malloc(sizeof(queue_ll));
    if (queue == NULL){ return NULL; }
    queue->len = 0;
    queue->head = NULL;
    queue->tail = NULL;
    return queue;
}

void queue_ll_delete(queue_ll *queue) {
	if (queue == NULL){ return; }
	queue_ll_clear(queue);
	free(queue);
}

int queue_ll_enqueue(bt_p *elt, queue_ll *queue) {
	if (queue == NULL){ return -1; }
	if (elt == NULL){ return -1; }
	struct elt_queue_ll *new_maillon = malloc(sizeof(struct elt_queue_ll));
	if (new_maillon == NULL){ return -1; }
	new_maillon->elt = elt;
	new_maillon->next = NULL;
	if (queue->len == 0) {
		queue->head = new_maillon;
		queue->tail = new_maillon;
	} else {
		(queue->tail)->next = new_maillon;
		queue->tail = new_maillon;
	}
	queue->len++;
	return 0;
}

int queue_ll_dequeue(queue_ll *queue) {
	if (queue == NULL){ return -1; }
	if (queue->len == 0){ return -1; }
    struct elt_queue_ll *tmp = queue->head;
	queue->head = (queue->head)->next;
	if (queue->len == 1 || queue->len == 2) { 
        queue->tail = queue->head; 
    }
    free(tmp);
    queue->len--;
	return 0;
}

bt_p *queue_ll_head(queue_ll *queue) {
	if (queue == NULL || queue->len == 0){ return NULL; }
	return (queue->head)->elt;
}

bt_p *queue_ll_tail(queue_ll *queue) {
	if (queue == NULL || queue->len == 0){ return NULL; }
	return (queue->tail)->elt;
}

int queue_ll_clear(queue_ll *queue) {
	if (queue == NULL){ return -1; }
	int len = queue->len;
	while (queue->len != 0)
		queue_ll_dequeue(queue);
	return len;
}

int queue_ll_is_empty(queue_ll *queue) {
	if (queue == NULL){ return -1; }
	if (queue->len == 0){ return 1; }
	return 0;
}
