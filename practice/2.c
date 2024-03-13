#include <stdio.h>

int main() {
    for (size_t i = 1; i < 5; i++) {
        for (size_t j = 4 - i; j >= 1; j--) {
            printf(" ");
        }
        for (size_t j = 1; j < i + 1; j++) {
            printf("%d", j);
        }
        for (size_t j = 1; j < i; j++) {
            printf("%d", i - j);
        }
        printf("\n");
    }

    return 0;
}
