#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main(){
    
    printf("Choose please kind sir :  \n");
    printf(" 1) add\n 2) subtract\n 3) quit\n");
    
    int a, b,c;
    printf("and then choose another two numbers please : \n");
    scanf("%d %d %d", &a, &b,&c);
    
    switch (a){
        case 1 :
            printf ("you're going to add....\n");
            printf("The addition of your chosen numbers is : %d\n", b +c); 
            return 0;
        case 2 : 
            printf("you're going to be subtracting...\n");
            printf("The subraction of your chosen numbers is : %d\n", b - c); 

            return 0;
        case 3 :
            printf("you're going to quit...\n");
            return 0;
        default : 
            printf("You chose wrong mi amigo, rerun this program please...\n");
        }

    }
    


