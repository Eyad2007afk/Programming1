#include <stdio.h>
#include <time.h>

void test(int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum+=1;  
       
    }
   
}
 void test2(int n){
        int sum = 0 ; 
        for (int i = 0; i < n ; i++){
            sum +=1;
            for (int j = 0 ; j < n; j++){
                sum += j + n;
            }
        }
    }

int main(void){
    int sizes[] = {1000,2000,4000};
    for (int k = 0; k < 3; k++){
        int n = sizes[k];
        
        clock_t start = clock();
        test(n);
        
        clock_t end = clock();
        double time_taken = (double) (end - start)  / CLOCKS_PER_SEC;
        printf("%d: %f\n", n, time_taken); 
        
    }
    int bsizes[] = {500,1000, 2000};
        for (int a = 0; a < 3; a++){
        int j = bsizes[a];
        clock_t start = clock();
        test2(j);
        clock_t end = clock();
        double time_taken = (double) (end - start) / CLOCKS_PER_SEC;
        printf("%d : %f\n", j, time_taken);
        }
}