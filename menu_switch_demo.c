#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main(){
    while (1){
    printf("Choose please kind sir :  \n");
    printf(" 1) add\n 2) subtract\n 3) quit\n");
    int a;
    scanf("%d", &a);
    
    switch (a){
        case 1 :
            printf ("you're going to add....\n"); 
            return 0;
        case 2 : 
            printf("you're going to be subtracting...\n");
            return 0;
        case 3 :
            printf("you're going to quit...\n");
            return 0;
        default : 
            printf("You chose wrong mi amigo, rerun this program please...\n");
            
            
            
        }
    }
}
