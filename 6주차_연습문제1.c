#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int MaxNum(int n1, int n2, int n3) {
	if (n1 > n2)
		return (n1 > n3) ? n1 : n3;
	else
		return(n2 > n3) ? n2 : n3;
}

int MinNum(int n1, int n2, int n3) {
	if (n1 < n2)
		return (n1 < n3) ? n1 : n3;
	else
		return(n2 < n3) ? n2 : n3;
}

int main(void){
	int num1, num2, num3;
	printf("3개의 정수를 작성하시오(띄어쓰기로 구분): ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("가장 큰 수: %d \n", MaxNum(num1, num2, num3));
	printf("가장 작은 수: %d \n", MinNum(num1, num2, num3));
	return 0;
}
