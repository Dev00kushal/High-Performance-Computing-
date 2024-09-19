#include <stdio.h>
#include <stdlib.h>
#include <time.h>   

int main() {
    int numbers[10];

    srand(time(0));

    for (int i = 0; i < 10; i++) {
        numbers[i] = rand();
        printf("%d is %d\n", i, numbers[i]);
    }

    return 0;
}
