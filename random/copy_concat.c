#include <stdio.h>
//size_t safe_copy(char *dst, size_t cap, const char *src)


int main(void){
    printf("enter something short");
    char bucket[5];
    int i = 0;
    while (i < 5){
    int c = getchar();
        if (getchar() >= 5){
            printf("word was too long...\n");
            break;
        } else if (getchar() < 5){
            printf("good size word chief.\n");
        }
        bucket[i] = (char)c;
        i++;
    }    
    bucket[i] = '\0';
    return 0;
    
}