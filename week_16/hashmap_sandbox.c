#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//keeps integers positive to prevent out of bounds array indexing 
static int simple_int_hash (int key){
    if (key < 0){
        key = -key;
    }
    return key;

}
//string hash function 
//idk what polynomial rolling means but lets roll, this uses multiplier 31
static unsigned long simple_string_hash(char *s){
    unsigned long h = 0;
    while (*s){
        h = h *31u + (unsigned char)(*s);
        s++;
    }
    return h;
}

//helper function to simulate an experiment with a chosen table size 
void run_collison_experiment (int table_size){
    int int_keys[] = {42,105,32,22,-15,72,82,92,102};
    int num_keys = sizeof(int_keys)/sizeof(int_keys[0]);

    //create an array to keep track of how many keys land in each slot
    //dynamically allocate based on table_size
    int *bucket_counts = calloc(table_size, sizeof(int));
    if (bucket_counts == NULL){
        return;
    }
    int total_collisions = 0;

    printf("RUNNING EXPERIMENT WITH TABLE SIZE : %d\n", table_size);

    for (int i = 0 ; i < num_keys ; i++){
        int key = int_keys[i];
        int raw_hash = simple_int_hash(key);
        int index = raw_hash % table_size;

        //if count for this index is greater than 0
        // key already claimed this slot = COLLISION!

        if (bucket_counts[index] > 0){
            total_collisions++;
            printf("Key : %4d maps to index : %d [COLLISON! Slot already has %d item(s)]\n", key, index, bucket_counts[index]);

        }else {
            printf("key : %4d maps to index : %d [First item in slot]\n", key, index);
        }
        bucket_counts[index]++;
    }
    double load_factor = (double)num_keys / table_size;
    printf("SUMMARY : \n");
    printf("Total items inserted : %d\n", num_keys);
    printf("Table capacity : %d\n", table_size);
    printf("Computer Load factor : %.2f\n", load_factor);
    printf("total collisions : %d\n", total_collisions);

    free(bucket_counts);
}


int main(void){
    int table_size = 10;

    printf("EXPERIMENT 1 : INTEGER HASHING \n");
    int int_key[] = {42,105,32,22,-15};
    int num_keys = sizeof(int_key) / sizeof(int_key[0]);

    for (int i = 0; i < num_keys ; i++){
        int index = (int)(raw_hash % (unsigned long) table_size);
        int key = int_key[i];
        int raw_hash = simple_int_hash(key);
        
        //important part, modulos operations contrains the raw hash to our table size
        int index = raw_hash % table_size;
        printf("Key : %4d -> raw hash : %4d -> table index : %d\n", key, raw_hash, index);
    }
    printf("EXPERIMENT 2 : STRING HASHING \n");
    const char *string_keys[] = {"syahira", "eyad", "bob", "clara"};
    int num_strings = sizeof(string_keys)/ sizeof(string_keys[0]);

    for (int k = 0 ; k < num_strings ; k++){
        const char *key = string_keys[k];
        unsigned long raw_hash = simple_string_hash(key);

        //safely map wide unsigned long to our small table index to avoid collisions
    }
        printf("key : %-6s -> Raw Hash : %12lu -> Table Index : %d\n", key, raw_hash, index);
    }
    
    printf("EXPERIMENT  : TESTING EFFECT OF TABLE SIZE AND LOAD FACTOR \n");
    run_collison_experiment(5);

    run_collison_experiment(20);
    
    
    //playtime 
    //to hash any string 
    //declare h as an unsigned long and set it to 0 
    unsigned long h = 0;
    //declare a standard string 
    unsigned char chare[] = "string";
    //create a pointer pointing to the start of that string
    const char *s = chare;
    //loop until the pointer hits the hidden \0 at the end (null terminator)
    while(*s){
        //*s grabs the actual character value at the current position 
        h = h * 31u + (unsigned long)(*s);
        //s++ moves the pointer to the very next character in memory until done with string
        s++;
    }
    printf("Hashed string  : %lu\n", h);
    return 0;