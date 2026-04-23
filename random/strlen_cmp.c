#include <stdio.h>
#include <stddef.h>

size_t strlen11(const char *s){
     size_t g = 0;
     while (s[g] != '\0'){
        g++;
     }
     return g;
}

int strcmp1(const char *a, const char *b){
    int i = 0;
    while (a[i] == b[i] && a[i] != '\0'){
        i++;
    }
    return (unsigned char)a[i] - (unsigned char)b[i];
}
int main(void){
    printf("Enter a word : \n");
    char d[50];
    int i = 0;
    
   
    while (i < 49){
        int c = getchar();
        if (c == '\n' || c == EOF){
            break;
        }
        d[i] = (char)c;
        i++; 
    }
    d[i]= '\0';
    printf("the word : '%s' has %zu characters\n", d,strlen11(d));
    printf("STRING COMPARE TIME \n ENTER TWO WORDS : \n");
   
    char bucket1[10];
    char bucket2[10];
    int i1 = 0;
    int i2 = 0;
    while (i1 < 9){
        int a = getchar();
        if ( a == '\n' ||  a == EOF ){
            break;
        }
        bucket1[i1] = (char)a;
        i1++;
       
    }
    bucket1[i1] = '\0';
    
    while (i2 < 9){
        int b = getchar();
        if (b == '\n' || b == EOF){
            break;
        }
        bucket2[i2] = (char)b;
        i2++;
    }
     bucket2[i2] = '\0';
    printf("your first word is : %s, and your second word is %s\n", bucket1, bucket2);
    int diff = strcmp1(bucket1,bucket2);
    if (diff == 0){
        printf("words are identical good shi \n");
    } else if (diff != 0){
        printf("words are not identical gang\n");
    }
    return 0;
}