#include <stdio.h>
#include <stdbool.h>

int main() {
    int choice = 1; // 1, 2, 3

    if (choice == 1) {
        printf("Choice 1\n");
    } else if (choice == 2) {
        printf("Choice 2\n");
    } else if (choice == 3) {
        printf("Choice 3\n");
    } else {
        printf("Error: invalid choice!\n");
        return 1;
    }

    switch (choice) {
        case 1:
            puts("Choice 1 in S/C");
            break;
        case 2:
            puts("Choice 2 in S/C");
            break;
        case 3:
            puts("Choice 3 in S/C");
            break;
        default:
            printf("Error: invalid choice!\n");
            return 1;
    }

    // Dangling else
    int user = 0;
    bool isAdmin = false;

    // Note that user 2 is admin

    // puts("Enter your user number: ");
    // scanf("%d", &user);

    /*
     *      Be careful: C does not mind
     *      if you forget braces on your if
     */

    // if (user == 2)
    //     puts("User 2...");

    //     isAdmin = true;

    // if (isAdmin) {
    //     puts("Super user!");
    // }

    return 0;
}
