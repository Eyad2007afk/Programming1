#include <stdio.h>

int main(void){
    int f = 5;
    printf("Enter a number 1..10 : \n");
    int s; 
    scanf("%d", &s);
    printf("Now enter an array of %d digits \n", s);
    for (int i =s; i < 10 ; i++){
        int a[s] = {};
        scanf("%d", a[i]);

         size_t n = sizeof(a)/ sizeof(a[0]);
        for (int i = 0; i < n; i++){
        printf("%d,", a[i]);

    
    }
       }
       return 0;
   
    
}
//  printf("check out this array : \n");
//     int b[10]= {1,3,4,6,7,99};
//     size_t n = sizeof(b)/sizeof(b[0]);
//     for (int i = 0; i < n; i++){
//         printf("%d,", b[i]);
//     }
//     printf("\nenter a number 0-10 : \n");
//     int a;
//     scanf("%d", &a);
//     if (a == -1 || a > 10 ){
//         printf("Invalid input \n") ; return 0;
//     } else {
//         printf("You good.\n");
//     }
//     printf("im gonna read your chosen number into the array : %d\n",b[a]);
//     return 0;