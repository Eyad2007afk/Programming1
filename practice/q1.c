#include <stdio.h>
int main (void){
    int a =1 ;
    float b = 2.2;
    char c = 'C';

    
    printf("int value : %d, its size is : %zu bytes \n", a, sizeof(a));
    printf("float value : %lf\n", b);
    printf("Char value : %c\n", c);

    return 0;

}