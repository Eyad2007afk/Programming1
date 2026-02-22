#include <stdio.h>

int minmax(const int* a, const int* b);

int main(void){
    int x = 5, y = 3;
    int result = minmax(&x, &y);
    printf("status  : success : %d\n", result);

    int a = 10, b = 2;
    int sum = minmax(&a, &b);
    printf("second status : success : %d\n", sum);
    return 0;
}
int minmax(const int* a, const int* b){
    return *a + *b;
}
