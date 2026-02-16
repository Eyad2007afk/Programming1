#include <stdio.h>




int main(void){
    double a, b;
    printf("enter a number : ");
    scanf("%lf %lf", &a, &b);
    printf("these are your numbers : %lf & %lf \n", a, b);
    printf("we're going to be dividing these numbers : \n");
    printf("The answer is : %lf\n", (int) a/b);
    printf("now we're going to divide these numbers as doubles : \n");
    printf("The answer is  : %lf\n", (double)a/b);
    printf("The answer is  : %lf\n", a/(double)b);
    printf("now watch as we double both : \n");
    printf("The answer is  : %lf\n", (double)(a/b));



    return 0;
}