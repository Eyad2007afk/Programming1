#include <stdio.h>

int main(){
        int a,b,c;
        scanf("%d %d %d", &a, &b,&c);
        int result = a + b + c; 
        int res = a - b - c;
        int res1 = a * b * c;
        float res2 = (float)a / b / c;
        float res3 = (float)(a + b) / c;
        float res4 = (float)a / (b + c);
        printf("The result of a + b + c is: %d %d %d\n", result);
        printf("The result of a - b - c is: %d %d %d\n", res);
        printf("The result of a * b * c is: %d %d %d\n", res1);
        printf("The result of a / b / c is: %f %f %f\n", res2);
        printf("The result of (a + b) / c is: %f %f\n", res3);
        printf("The result of a / (b + c) is: %f %f\n", res4);


}