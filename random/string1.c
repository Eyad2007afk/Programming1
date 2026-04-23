#include <stdio.h> 
#include <string.h>
 size_t reader(char *s,size_t cap, int* truncated){
        int i = 0;
        if (truncated) *truncated = 0; 
    while (i < cap - 1){
        char c = getchar();
            if (c == '\n' || c == EOF){
                break;
            }
            s[i] = (char)c;
            i++;
    }
        s[i] = '\0';
     printf("here is what you entered : %s\n", s);
     return 0;
}
int main(void){
    printf("enter something real quick brah\n");
    char bucket[50]; 
    char *c; 
    int i = 0;
    int is_truncated;
    reader(c, 50, &is_truncated);

    return 0;
}