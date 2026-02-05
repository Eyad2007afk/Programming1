#include <stdio.h>
#include <stdbool.h>

int main(){
    int a = 1;
    char c = 39;
    bool b = true;
    //short double sd = 22.03;
    float d = 352.51f;

    int result = 3+2;
    int result2 = (3+2) * 5;
    int result3 = (3+2) * (3 *4-4);

    b = 3==3;
    if (b){
        printf("3 is indeed equal to 3.\n");

    }
    if (2!= -4){
        printf("2 is not equal to -4\n");
    }
    if (3 > 24){
    } else if (1==1){
        printf("Short circuit!\n");

    }
//    else {
    //    printf("Everything is as it should be.\n")
  //  }

    // Casting time
    int i = 7, j = 2;
    printf("%d / %d == %d\n", i,j,i/j);
    printf("%d / %d == %f\n", i,j,(double) i/j);

    float pi = 3.14159265358979324;
    printf("%f\n", pi);
    printf("%.2f\n", pi);





    return 0;
}
