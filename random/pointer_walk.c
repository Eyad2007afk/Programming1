#include <stdio.h>

int main(void){
    int buf[] = {5,10,15,25};
    const size_t n = sizeof(buf)/sizeof(buf[0]);
    int *begin = &buf[0];
    int *end = &buf[0] + n;
    printf("begin : %p, end : %p\n", (void*)begin, (void*)end);
    begin++;
    printf("second go  : begin : %p, end : %p\n", (void*)begin , (void*)end);
    *++begin;
    printf("third go  : begin : %p, end : %p\n", (void*)begin , (void*)end);
    printf("fourth go  : begin : %p, end : %p\n", (void*)*begin , (void*)end);

    
    
    return 0;
}