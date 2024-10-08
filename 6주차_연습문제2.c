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
	printf("변경하기 원하는 변환기를 선택하시오(C->F : '1', F->C : '2' 입력) ");
	scanf("%d", &HowTo);
	printf("변환하기를 원하는 온도를 입력하시오: ");
	scanf("%lf", &Temp);
	if (HowTo == 1) {
		Temp = CelToFah(Temp);
		printf("변환된 온도: %.2f\n", Temp);
	}
	else if (HowTo == 2) {
		Temp = FahToCel(Temp);
		printf("변환된 온도: %.2f\n", Temp);
	}
	else {
		printf("유효하지 않은 선택입니다.\n");
	}
	return 0;
}
