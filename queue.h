#include "element.h"

#define __MAX_ELEM__ 50

typedef struct queue{
    int head, tail;
    element *elem[__MAX_ELEM__];
} queue;

queue *inizialize_queue(element *element);

bool is_empty();

int enqueue(queue *queue, element *element);

element *dequeue(queue *queue);

int get_head(queue *queue);

int get_tail(queue *queue);

void print_all_queue(queue *queue);