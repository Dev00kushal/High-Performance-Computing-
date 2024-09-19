#include <stdio.h>

int main() {
    for (int n = 1; n <= 100; n++) {
        int printed = 0;  
        if (n % 2 == 0) {
            printf("Bish");
            printed = 1;
        }
        if (n % 3 == 0) {
            printf("Bash");
            printed = 1;
        }
        if (n % 5 == 0) {
            printf("Bosh");
            printed = 1;
        }

        if (!printed) {
            printf("%d", n);
        }

        printf("\n");
    }

    return 0;
}
