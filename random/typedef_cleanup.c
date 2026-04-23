#include <stdio.h>

typedef enum {
    REG = 1,
    DIRECTORY,
    LINK,
}filetype_t;

typedef struct {
    unsigned read : 1;
    unsigned write : 1;
    unsigned execute : 1;
    filetype_t type  : 2; 
}fileentry_t;

int main(void){
    fileentry_t file1;
    file1.read = 1;
    file1.write = 0;
    file1.execute = 1;
    file1.type = LINK;
    printf("here is the work : %d, %d, %d\n", file1.read, file1.write, file1.execute);
    printf("heres the type assigned : %d", file1.type);

    return 0;
}