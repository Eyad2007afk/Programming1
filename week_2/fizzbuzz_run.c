#include <stdio.h> 


int main(){
    printf("enter a number gang : \n");
    int a; 
    scanf("%d", &a);
    printf("the number you chose is : %d\n", a);
    if (a % 2 ==0 ){
        printf("the number is even\n ");
    } else if (a % 2 != 0 ){
        printf("the number is odd\n");
    }

    printf("check this out \n");
    printf("type 1 : \n");
    int b;
    //scanf("%d",&b );
    for (int i = 1; i <= 16; i++){
        if (i % 2==0){
            printf("number %d is even\n", i);
        } else if (i % 2 !=0){
            printf("number %d is odd\n", i);
        }
    }
    return 0;   
}