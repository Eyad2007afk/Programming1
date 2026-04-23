#include <stdio.h>
#include "my_math.h"
#include "my_math.h"

int multiply1(void){
    return 8;
}

int main(void){
    printf("lets do weird stuff : %d\n ", MULTIPLY(5,2));
    printf("lets do more weird stuff : %d\n", multiply1());
    int a =5, b = 10;
    printf("woah??? %d\n", MIN(a,b));
    printf("im losing the plot gang %d\n", CLAMP(2,0,1));
    return 0;
    
}
