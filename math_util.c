#include "math_util.h"

int add (int a, int b){
    return a + b;
}
int subtract (int a, int b){
    return a - b;
}
int multiply (int a, int b){
    return a * b;
}
float divide(int a, int b){
    return (float) a / b;
}

int power( int base, unsigned int nonneg_power){
    int result = base;
    for (int i =1; i <nonneg_power; i++)
        result += base;
    return 0;
}
unsigned long long factorial_rec (int n){
        if (n == 0){
                return 1ULL;

        }
        return n *factorial_rec(n-1U);
}
