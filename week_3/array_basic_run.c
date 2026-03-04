#include <stdio.h>
#include <stddef.h>

int main(void){
    int a[6]={1,2,3};
     size_t n = sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < n; i++){
        printf("%d\n", a[i]);
    }
        printf("Size of this array is %d\n", n);
        printf("first valid element is : %d\n",a[0]);
        printf("last valid element is : %d\n",a[2]);
    return 0;

}