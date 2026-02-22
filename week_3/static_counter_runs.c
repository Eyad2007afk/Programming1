#include <stdio.h>
 void runningcount (int count){
    static int amount = 0; 

    amount = count + amount ;
    printf("added a new amount %d | the new total count is : %d\n", count, amount);

}

int main (void){
    runningcount(1);
    runningcount(2);
    runningcount(3);
    runningcount(4);
    runningcount(5);

    return 0;

}