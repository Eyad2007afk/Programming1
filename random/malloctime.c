#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("choose a number for array elements : \n");
    int a;
    scanf("%d", &a);
    int *c = calloc(a, sizeof(int));
    if (c == NULL){
        printf("malloc fail bye");
        return 1;
    }

    for (int i = 0 ; i < a ; i++){
        c[i] = i * 10;
        printf("index of the array is %d\n", i, c[i]);
    }
    free(c);
    c = NULL;

    printf("memory freed from RAM\n");
    printf("need more memory....\n");
    int *temp = realloc(c, 10 * sizeof(int));

    if (temp == NULL){
        printf("memory reallocation failed\n");
        free(c);
        return 1;
    }
    c = temp;
    for (int i = a; i < 10; i++){
        c[i]=999;
        
    }
    for (int i = 0; i  < 10; i++){
        printf("new element %d\n", i, c[i]);

    }
    printf("done reallocating, now freeing...\n");
    free(c);
    c = NULL;
    printf("freed c.\n");

    return 0;
}