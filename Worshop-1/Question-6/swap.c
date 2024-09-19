#include <stdio.h>

int main() {
    int a = 3;
    int b = 4;
    int temp = 0;

    printf("a is %d and b is %d\n", a, b);

    // Swapping logic
    temp = a;
    a = b;
    b = temp;

    printf("a is now %d and b is now %d\n", a, b);

    return 0;
}
