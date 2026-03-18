#include <stdio.h>
//what is a structure for?
// zaki - "it is like a custom datatype" (Sullivqn, 11/3/26)
// Logical association or grouping of separate data.
//without a structure you risk creating points this way : 
// int x;
// int y;

// not good- because any one of these ints read separately is nonsense

struct point{
    int x;
    int y;

};

struct point translateup(struct point p){
    struct point result = {.x = p.x, .y = p.y +1};
    return result; 
}
void translateright(struct point *ptr){
    ptr -> x+=1;
}

int main(void){
    struct point p = {.x = 6, .y = 7};

    p = translateup(p);
    printf("Point after translation up : (%d, %d)\n", p.x, p.y);


    printf("Point : (%d, %d)", p.x, p.y);
    
    struct point *ptr = &p;

    printf("\nvia Point : (%d, %d)", ptr->x, ptr->y);

    *ptr = 

}