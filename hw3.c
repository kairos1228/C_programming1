#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n,m = 0, space = 4;

	for (int space = 4; space >= 0; space--) {
		for (int m = 0; m < space; m++) {
			printf(" ");
		}
		for (int n = 0; n < m; n++) {
				printf("**");
		}
		m += 1
		printf("*\n");
		}
	return 0;
}
