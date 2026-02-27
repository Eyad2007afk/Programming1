#include <stdio.h>

typedef enum smelly {
    MODE_ON = 1,
    MODE_OFF,
    MODE_ERROR, 
} Mode ;
strcut _point {
    int x; 
    int y;

};

int main(void){
    printf("enter a mode :\n1.On\n2.Off\n3.Error\n");
    int mode;
    enum smelly s = MODE_OFF;
    Mode t = MODE_OFF;

    scanf("%d", &s);


    switch (s){
        case MODE_ON: printf("You turned it on! \n");
        break;
        case MODE_OFF: printf("You turned off \n");
        break;
        case MODE_ERROR : printf("You chose an error \n");
        break;
        default : printf("WRONG DAWG \n");
    }


    struct _point p = {4,4};
    printf("Point  : (%d, %d)\n", p.x, p.y);

    return 0;
}