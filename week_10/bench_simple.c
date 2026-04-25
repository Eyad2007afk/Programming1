#include <stdio.h>
#include <time.h>

void test(int n) {
    int sum = 0;
    for  (int i = 0; i < n; i++) {
        sum += i;
      
}
}

int main() {
    int sizes[] = {1000000, 2000000, 4000000};

    for (int k = 0; k < 3; k++) {
        int n = sizes[k];
        clock_t start = clock();
        test(n);
        clock_t end = clock();
        double time_taken = (double) (end - start) / CLOCKS_PER_SEC;
        printf("%d: %f\n", n, time_taken);
    }
    return 0;
}
