#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int CelToFah(double Temp){
	double FahTemp;
	FahTemp = (Temp * 1.8) + 32;
	return FahTemp;
}

int FahToCel(double Temp) {
	double CelTemp;
	CelTemp = (Temp - 32) / 1.8;
	return CelTemp;
}

int main(void){
	int HowTo;
	double Temp;
	printf("�����ϱ� ���ϴ� ��ȯ�⸦ �����Ͻÿ�(C->F : '1', F->C : '2' �Է�) ");
	scanf("%d", &HowTo);
	printf("��ȯ�ϱ⸦ ���ϴ� �µ��� �Է��Ͻÿ�: ");
	scanf("%lf", &Temp);
	if (HowTo == 1) {
		Temp = CelToFah(Temp);
		printf("��ȯ�� �µ�: %.2f\n", Temp);
	}
	else if (HowTo == 2) {
		Temp = FahToCel(Temp);
		printf("��ȯ�� �µ�: %.2f\n", Temp);
	}
	else {
		printf("��ȿ���� ���� �����Դϴ�.\n");
	}
	return 0;
}
