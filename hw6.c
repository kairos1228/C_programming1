#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int Num[5];
	int Odd[5] = { 0 };
	int Even[5] = { 0 };
	int i,j;

	printf("Please input five integers: ");
	scanf("%d %d %d %d %d", &Num[0], &Num[1], &Num[2], &Num[3], &Num[4]);

	for (i = 0; i < 5; i++) {
		if (Num[i] % 2 == 0)
			Even[i] = Num[i];
		else
			Odd[i] = Num[i];
	}
	printf("\nOdd numbers: ");
	for (i = 0; i < 5; i++) {
		if (Odd[i] == 0)
			continue;
		else
			printf("%d ", Odd[i]);
	}
	printf("\nEven numbers: ");
	for (i = 0; i < 5; i++) {
		if (Even[i] == 0)
			continue;
		else
			printf("%d ", Even[i]);
	}
	printf("\n");

	return 0;
}
