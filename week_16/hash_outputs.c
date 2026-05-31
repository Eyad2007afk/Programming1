#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int simple_int_hash(int key) {
    if (key < 0) {
        key = -key;
    }
    return key;
}
void run_collison_experiment(int table_size) {
    int int_keys[] = {42, 105, 32, 22, -15, 72, 82, 92, 102};
    int num_keys = sizeof(int_keys) / sizeof(int_keys[0]);

    int *bucket_counts = calloc(table_size, sizeof(int));
    if (bucket_counts == NULL) {
        return;
    }
    int total_collisions = 0;

    printf("RUNNING EXPERIMENT WITH TABLE SIZE : %d\n", table_size);

    for (int i = 0; i < num_keys; i++) {
        int key = int_keys[i];
        int raw_hash = simple_int_hash(key);
        int index = raw_hash % table_size;

        if (bucket_counts[index] > 0) {
            total_collisions++;
            printf("Key : %4d maps to index : %d [COLLISION! Slot already has %d item(s)]\n", key, index, bucket_counts[index]);
        } else {
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
int main(void) {
    int table_size = 10;
    printf("=== EXPERIMENT 1 : INTEGER HASHING ===\n");
    int int_key[] = {42, 105, 32, 22, -15};
    int num_keys = sizeof(int_key) / sizeof(int_key[0]);

    for (int i = 0; i < num_keys; i++) {
        int key = int_key[i];
        int raw_hash = simple_int_hash(key);
        int index = raw_hash % table_size;
        printf("Key : %4d -> raw hash : %4d -> table index : %d\n", key, raw_hash, index);
    }
    printf("\n=== EXPERIMENT 2 : TESTING EFFECT OF TABLE SIZE AND LOAD FACTOR ===\n");
    run_collison_experiment(5);
    run_collison_experiment(20);

    return 0;
}