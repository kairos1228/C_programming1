#include <stdio.h>

int main() {
    int num, i;

    printf("Please enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("It is not a prime number.\n");
        return 0;
    }

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            printf("It is not a prime number.\n");
            return 0;
        }
    }

    printf("It is a prime number.\n");

    return 0;
}
