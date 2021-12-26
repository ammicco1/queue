#include "queue.h"
#include <stdio.h>

int main(){
    int choise, key, ret;
    bool init = false;
    queue *queue;

    while(1){
        printf("\n---------------------------------------------\n");
        printf("WHAT DO YOU WANT TO DO?\n");
        printf("\t- 1: INIZIALIZE A QUEUE\n");
        printf("\t- 2: ENQUEUE\n");
        printf("\t- 3: DEQUEUE\n");
		printf("\t- 4: IS EMPTY?\n");
		printf("\t- 5: PRINT ALL QUEUE\n");
        printf("---------------------------------------------\n");
        printf("\nCHOISE: "); scanf("%d", &choise);

        switch (choise){
            case 1: if(!init){
                        printf("INSERT THE FIRST KEY: "); scanf("%d", &key); queue = inizialize_queue(inizialize_element(inzialize_key(key))); printf("DONE!\n"); init = true;
                    }else{
                        printf("THE QUEUE ALREADY EXIST!");
                    } break;
            case 2: if(init){
                        printf("INSERT THE ELEMENT TO INSERT: "); scanf("%d", &key); ret = enqueue(queue, inizialize_element(inzialize_key(key))); if(ret == 0){printf("DONE!\n");}
                    }else{
                        printf("INIZIALIZE THE QUEUE FIRST!");
                    } break;
            case 3: if(init){
                        if(!is_empty(queue)){
                            printf("DEQUEUE THE ELEMENT: %d", get_element_key(dequeue(queue)));
                        }else{
                            printf("THE QUEUE IS EMPTY");
                        }
                    }else{
                        printf("INIZIALIZE THE QUEUE FIRST!");
                    } break;
            case 4: if(init){
                        if(!is_empty(queue)){
                            printf("THE QUEUE'S NOT EMPTY");
                        }else{
                            printf("THE QUEUE IS EMPTY");
                        }
                    }else{
                        printf("INIZIALIZE THE QUEUE FIRST!");
                    } break;
            case 5: if(init){
                        if(!is_empty(queue)){
                            print_all_queue(queue);
                        }else{
                            printf("THE QUEUE IS EMPTY");
                        }
                    }else{
                        printf("INIZIALIZE THE QUEUE FIRST!");
                    } break;
            default: printf("WRONG CHOISE!"); break;
        }
    }

    return 0;
}
