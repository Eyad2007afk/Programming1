#include <stdio.h>
#include <string.h>
size_t manual_strlen(const char *s){
    int counter = 0;
    while(1){
        if (s[counter] == '\0'){
            break;
        } counter++;

    }
}

size_t readline(char *buf, size_t cap, int *truncated){
    size_t i = 0;
    int ch;
    *truncated = 0;

    if (cap == 0){
        return 0;
    } 
    while((ch = getchar()) != '\n' && ch != EOF){
        if ( i  +1 < cap){
            buf[i++] = (char) ch;
        } else {
            *truncated = 1; 
        }
    }
    buf[i] = '\0';
    if (*truncated){
        while (ch != '\n' && ch != EOF){
            ch = getchar();
        }
    }
    return i;

}

int main (void){
    char buffer[6];

    buffer[0]= 'H';
    buffer[1]= 'e';
    buffer[2]= 'l';
    buffer[3]= 'l';
    buffer[4]= 'o';
    buffer[5]= '\0'; //explicit termination of string, which is = null lowercase 

    printf("String : %s\n", buffer);
    printf("Length : %d\n", strlen(buffer));
    printf("Length : %zu\n", strlen(buffer));
    printf("size : %zu\n", sizeof(buffer));

    char buffer2[4]={'a','b','c'}; 
    char buffer3[4]= "abc";
    char buffer_jos[4]={'a','b','c','d'};
    
    if (strncmp(buffer_jos, "abc", 4) == 0){
        printf("string match\n");
    } else {
        printf("No match \n");
    }
        printf("strlen of good :   %zu\n", strlen(buffer3));
        printf("strlen of bad :   %zu\n", strlen(buffer_jos));

        printf("enter a line : ")
        size_t length = readline(buffer, sizeof(buffer), &truncated);
        printf("Entered : \"%s\"\n", buffer);
        printf("Length : %zu\n", length);
        printf("Strlen : %zu\n", strlen(buffer));
        printf("Capacity : %zu\n")


        



    return 0;

}