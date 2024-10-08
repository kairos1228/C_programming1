#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int GetNum() {
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    return num;
}

void DecToBin(int num) {
    if (num > 1) {
        DecToBin(num / 2);
    }
    printf("%d", num % 2);
}

int main(void) {
    int num = GetNum();
    printf("%d\n", num);
    if (num == 0) {
        printf("0");
    } else {
        DecToBin(num);
    }
    return 0;
}
