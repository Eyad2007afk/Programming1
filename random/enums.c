#include <stdio.h>

typedef enum {
    GREEN = 1,
    RED,
    YELLOW,
}traffic_t;

typedef enum { 
    TRUE = 1,
    FALSE,
}bool_t;

int main(void){
    printf("choose : \n 1. Go\n 2. Stop\n 3. Wait\n");
    int choice;
    scanf("%d", &choice);
    switch (choice) {  
    case GREEN: printf("light is green");
    break;
    case RED : printf("Light is red");
    break;
    case YELLOW : printf("Light is yellow");
    break;
    default : printf("invalid");
    }

    printf("TRUE OR FALSE : I am a bad partner \n 1. True \n 2. False \n");
    int cred; 
    scanf("%d", &cred);
    switch (cred){
        case TRUE : printf("yea you messed up today dumbass...\n");
        break;
        case FALSE : printf("maybe ur not so bad after all think of everything you've done\n");
        break;
        default : printf("You gotta choose somethin?!");
    }
    return 0;



}