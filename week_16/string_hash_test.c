#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static unsigned long string_hash(char *s){
    if (s == NULL || *s == '\0'){
        return 0lu;
    }
    unsigned long h =0;
    while(*s){
        h = h * 31u + (unsigned long)(*s);
        s++;
    }
    return h;
}

int main(void){
    int table_size;
    int num_strins;
    char hira[256];
    printf("String hash test program : \n");
    if (scanf("%d", &table_size) != 1 || table_size <= 0){
        printf("Invalid stable size\n");
        return 0;
    }
    printf("How many strings to input ? \n");
    if (scanf("%d", &num_strins) != 1 || num_strins <= 0){
        printf("Invalid count \n");
        return 0;
    }

    for (int i = 0; i < num_strins ; i++){
        printf("Enter string %d : ", i + 1);
        if (scanf("%255s", hira) != 1){
            break;
        }
        unsigned long raw_hash = string_hash(hira);
        int index = (int)(raw_hash % (unsigned long)table_size);

        printf("%-15s | %-20lu | %-12d\n", hira, raw_hash, index);
    }
    return 0;

}