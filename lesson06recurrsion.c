#include <stdio.h>
#include "math_util.h"






int main(void){
    unsigned  n =0;
    printf ("enter a number real quick : \n");
    scanf("%u", &n );
    printf("this is your number processed :  %llu", factorial_rec(n));



return 0;

}

//unsigned long long int factoril_loop (unsigned int n){
//if ( n == 0U){
//    return 1ULL;
//}

   // int a = 1;

   // for (i = n, n -1 , --i){
   //     a += i;
    //}
   // return a;
//}

