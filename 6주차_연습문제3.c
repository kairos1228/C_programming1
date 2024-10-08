#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ShowFiboSeries(int num) {
	int f1 = 0, f2 = 1, f3, i;
	if (num == 1)
		printf("%d", f1);
	else
		printf("%d %d ", f1, f2);
	for (i = 0; i < num - 2; i++) {
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
	}
}

int main(void){
	int num;
	printf("�Ǻ���ġ ������ �󸶳� ����ұ��? : ");
	scanf("%d", &num);
	if (num < 1) {
		printf("1�̻��� ���� �Է��ϼ���. \n");
		return 1;
	}
	ShowFiboSeries(num);
	return 0;
}