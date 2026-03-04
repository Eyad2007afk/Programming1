#include <stdio.h>
// void runningcount(float count){
//     static float amount = 0;
//     amount = count + amount;
//     printf ("new count is this : %f\n", amount);
//}
int main (void){
    int a[6]= {1,2,3};
    size_t n = sizeof(a) / sizeof(a[0]);
    printf("length of a is %zu\n", n);
    printf("first index = 0, last index %zu\n\n", n-1);
    // print_int_array(a,n);








    return 0;
}



 // printf("give me five numbers please : \n");
    // int a,b,c,d,e;
    // scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);

    // int array[] = {a,b,c,d,e};
    // printf("here is your numbers in an array : %d\n", array[0,1,2,3,4]);


    //     // the better way 

    // int arr[5];
    // printf("give me another 5 : \n");
    // for (int i = 0; i < 5; i++){
    //     scanf("%d", &arr[i]);
    // }
    // printf("watch this : \n");
    // for (int i = 4; i >= 0 ;i--){
    //     printf("%d\n", arr[i]);
    // }

    // float total = 0;
    // float arr[4];
    //   printf("give me the temp for 4 hours pls : \n");
    // for (int i = 0; i < 4;i++){
    //     scanf("%f", &arr[i]);
    //     runningcount(arr[i]);
    // }
    // float total = runningcount(arr[i]);

    // printf("the average of the 4 temps is this : %f", total);
