#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int size;

    // Seed the random number generator
    srand(time(NULL));

    // Ask the user for a number between 1 and 50
    printf("Enter a number between 1 and 50: ");
    scanf("%d", &size);

    if (size < 1 || size > 50) {
        printf("Invalid input. The number must be between 1 and 50.\n");
        return 1;
    }

    int *array = (int *)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100; 
    }


    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", array[i]);
    }

    free(array);

    return 0;
}
