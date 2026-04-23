#include <stdio.h>

typedef struct Rectangle { 
    int width; 
    int height;
}rectangle_t;
rectangle_t make_rect(int w, int h){
   rectangle_t r;
   r.width = w;
   r.height = h;
   return r;

}
void rectstat(const rectangle_t *r){
    printf("your rect stats are : width %d\nheight : %d\n", r -> width, r -> height);
}
int main (void){
    printf("enter two numbers : \n");
    int a,b;
    scanf("%d %d", &a, &b);
    rectangle_t rec1 = make_rect(a,b);
    int area = rec1.width * rec1.height;
    printf("the area of my is %dcm^-2\n", area);
    rectstat(&rec1);
    printf("sizes lets go : \nwidth : %zu\nheight : %zu\n struct entirely : %zu\n", sizeof(rec1.height), sizeof(rec1.width), sizeof(rec1));
    return 0;
}