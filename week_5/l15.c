#include <stdio.h>
#include <stdlib.h>

/* malloc(size)
    - allocated the memory 
    - returns pointer to initial address 
    - returns NULL on failure 

    calloc(count, size)
    - everything gets zeroes out 
    - 'safer' call 

    realloc(pointer, new_size)
    - resize an exisitng allocation 

    free(pointer)
    - release memory back to the system 
*/

int main(void){
    int n = 5;
    int *numbers = malloc(n * sizeof(int));

    if (numbers == NULL){ // memory allocation failure 
        printf("Not going to happen\n");
        return 1;
    }
    for (int i = 0; i < n; ++i){
        numbers[i] = i * 10;
    }
    for (int i = 0; i < n ; ++i){
        printf("%d " ,numbers[i]);
    }
    printf("\n");

    free(numbers);
    numbers = NULL;

    return 0;

}