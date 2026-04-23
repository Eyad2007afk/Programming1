#include <stdio.h>
typedef enum{
    BREAD,
    BWRITE,
    BEXECUTE,
}box_t;

typedef struct{
    unsigned read : 2;
    unsigned write : 2;
    unsigned execute : 2;
    unsigned type : 2;
}struct_t;

int set_t0(struct_t *f, int value){
    if (value <= 2){
        printf("good type\n");
    } else if (value > 2){
        printf("INVALID TYPE\n");
    }
}

int main(void){
    struct_t me1;
    me1.read = 2;
    me1.write = 3;
    me1.execute = 1;
    me1.type = BWRITE;
    printf("my file's read is : %d\n", me1.read);
    printf("my file's write is : %d\n", me1.write);
    printf("my file's execute is : %d\n", me1.execute);
    printf("my file type is : %d\n", me1.type);

    set_t0(&me1, BWRITE);
    return 0;
}