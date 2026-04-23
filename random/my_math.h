#ifndef MY_MATH_H
#define MY_MATH_H
#define MULTIPLY(a,b) ((a) * (b))

#define MIN(x,y) (x > y) ? (printf("x is big")) : (printf("y is big"))
#define CLAMP(x,lo,hi) ((x) < (lo)) ? (lo) : ((x) > (hi))  ? (hi) : (x)
int multiply1(void);

#endif
