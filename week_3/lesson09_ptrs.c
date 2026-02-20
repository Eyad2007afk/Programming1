#include <stdio.h>
// variable that stores a memory address 
//type of the pointer indicates the type of the pointee 
//int* -> variable that points to an int 
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
int main (void){
    //int a =3;
    //int* pi = &a;
    //avoid empty pointers 
    //int* pi;
    //instead 
    // int* pi = NULL;
    // printf("%d\n", a);
    // printf("%p\n", pi); //%p is an address 

    //dereference a pointer 

    // printf("%d\n", *pi);
    // int result = 2 * (*pi);
    // printf("%d\n", result);

    int a = 42;
    int b = 3;

    int temp = a;
    a = b;
    b = temp;

    printf("BEFORE : a: %d. b : %d\n", a,b);
    printf("AFTER : a: %d. b: %d\n", a,b);

    int arr[10]= {1,2,3};
    printf("arr[5] = %d\n", arr[5]);
    printf("arr: %p contains %d\n", arr, arr[0]);
    printf("arr: %p contains %d\n", arr, *arr);
    printf("arr: %p contains %d\n", arr+1, *(arr+1));

    // NULL guards - check if working with null pointer 
    //pointers can point to an arbitrary level : int****



}