#include <stdio.h>

int call (int a, int b);
double pickup (int a, int b);
 void decline (int a, int b );


int main (){
    printf ("im calling the call function  : \n", call );
    printf ("im calling the pickup function  : \n", pickup );
    decline(1,1);

    return 0;
    
}
int call(int a, int b){
    return 0;
}
double pickup (int a, int b){
    return 0;
}
void decline(int a, int b){
    printf("running the decline function\n");
}

