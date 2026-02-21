#include <stdio.h>
static void discard_line(void) {
    int ch;
    while ((ch = getchar()) != EOF){
        if (ch == '\n') break;
    }
}

int main(){
    int a;
    int b = 0;

    do {
        printf("enter a number  : ");
        int rc = scanf("%d", &a);
        if (rc != 1){
            printf("invalid input \n");
            discard_line();
            continue;
        } else if (a < 1 || a > 10){
            printf("you fell out \n");
            continue;
        } else {
            b = 1;
        }
    } while (!b);

    printf("nice number you copycat %d \n", a);
    
    // Count from 1 to 10
    for (int i = 1; i <= 10; i++){
        printf("%d\n", i);
    }
    
    return 0;
}
    
    
    


