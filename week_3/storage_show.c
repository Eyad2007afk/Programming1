#include <stdio.h>

int scope (int g){
    return g;
}
static int scop (int sg){
    return sg;
}
static int localcounter (int loc, int al){
    return loc + al;

}

int main (void){
    int x = 10; 
    printf("here is my first scope trial : %d\n", scope(x));
    printf("here is my second scope trial, meet scop  : %d\n", scop(x + 1));
    printf("here is my third scope trial, meet localcounter : %d\n", localcounter(10 + x, 10 - x));

}



