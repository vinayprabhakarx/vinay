#include <stdio.h>

int main() {
    int numbers[10], i;
    int evenNumbers[10];
    int count = 0;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &numbers[i]);
    }

    printf("\nEven numbers in the array:\n");
    for (i = 0; i < 10; i++) 
    {
        if (numbers[i] % 2 == 0) 
        {
            evenNumbers[count] = numbers[i];
            count++;
        }
    }

    for (i = 0; i < count; i++) 
    {
        printf("%d ", evenNumbers[i]);
    }
    printf("\n");

    return 0;
}
