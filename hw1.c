#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("Input two integers: ");
	scanf("%d %d", &num1, &num2);
	printf("%d & %d = %d \n", num1, num2, num1&num2);
	printf("%d | %d = %d \n", num1, num2, num1|num2);
	printf("%d ^ %d = %d", num1, num2, num1^num2);
	printf("pow(%d, %d) = %d\n", num1, num2, (int)pow(num1, num2)); 
	// a의 n승: a^n이 아닌 #include <math.h> 이후 pow(a,n) 이용

	return 0;
}
