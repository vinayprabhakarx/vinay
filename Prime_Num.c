#include <stdio.h>

int main() {
    int x[10], i, j, count = 0;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &x[i]);
    }

    printf("Enter the value you want to search: ");
    scanf("%d", &j);

    for (i = 0; i < 10; i++) {
        if (x[i] == j) {
            count++;
            printf("Value found at position: %d\n", i + 1);
        }
    }

    if (count == 0) {
        printf("Value not found.\n");
    } else {
        printf("Total occurrences: %d\n", count);
    }

    return 0;
}
