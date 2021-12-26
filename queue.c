#include "queue.h"
#include <stdio.h>

queue *inizialize_queue(element *element){
    int i;
    queue *tmp = malloc(sizeof(queue));

    for(i = 0; i < __MAX_ELEM__; i++){
        tmp -> elem[i] = NULL;
    }

    tmp -> elem[0] = element;
    tmp -> head = 0;
    tmp -> tail = 1;

    return tmp;
}

bool is_empty(queue *queue){
    if(queue -> elem[queue -> head] == NULL){
        return true;
    }else{
        return false;
    }
}

int enqueue(queue *queue, element *element){
    if(queue -> elem[queue -> tail] == NULL){
        queue -> elem[queue -> tail] = element;

        if(queue -> tail == __MAX_ELEM__){
            queue -> tail = 1;
        }else{
            queue -> tail = queue -> tail + 1;
        }

        return 0;
    }else{
        printf("THE QUEUE IS FULL!");

        return -1;
    }
}

element *dequeue(queue *queue){
    if(queue -> elem[queue -> head] != NULL){
        element *tmp = queue -> elem[queue -> head];
        queue -> elem[queue -> head] = NULL;

        if(queue -> head == __MAX_ELEM__){
            queue -> head = 1;
        }else{
            queue -> head = queue -> head + 1;
        }

        return tmp;
    }else{
        printf("THE QUEUE IS EMPTY");
        return NULL;
    }
}

int get_head(queue *queue){
    return queue -> head;
}

int get_tail(queue *queue){
    return queue -> tail;
}

void print_all_queue(queue *queue){
    int i;

    for(i = queue -> head; i < __MAX_ELEM__; i++){
        if(queue -> elem[i] != NULL){
            if(get_element_key(queue -> elem[i]) < 10){
                printf("---------\n|   %d   |\n---------\n", get_element_key(queue -> elem[i]));
            }else if(get_element_key(queue -> elem[i]) >= 100){
                printf("---------\n|  %d  |\n---------\n", get_element_key(queue -> elem[i]));
            }else{
                printf("---------\n|   %d  |\n---------\n", get_element_key(queue -> elem[i]));
            }
        }
    }

    for(i = 0; i < queue -> head; i++){
       if(queue -> elem[i] != NULL){
            if(get_element_key(queue -> elem[i]) < 10){
                printf("---------\n|   %d   |\n---------\n", get_element_key(queue -> elem[i]));
            }else if(get_element_key(queue -> elem[i]) >= 100){
                printf("---------\n|  %d  |\n---------\n", get_element_key(queue -> elem[i]));
            }else{
                printf("---------\n|   %d  |\n---------\n", get_element_key(queue -> elem[i]));
            }
        } 
    }
}