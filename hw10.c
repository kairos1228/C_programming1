#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct 
{
	char Name[50]; // 도시
	char Country[50]; // 국가
	int Population; // 인구 수
} CityInfo;


int main(void) {
	CityInfo arr[3];
	int i;
	for (i = 0; i < 3; i++) {
		printf("Name> ");
		scanf_s("%s", arr[i].Name, sizeof(arr[i].Name));
		printf("Country> ");
		scanf_s("%s", arr[i].Country, sizeof(arr[i].Country));
		printf("Population> ");
		scanf_s("%d", &arr[i].Population);
	}
	printf("Printing the three cities:\n");
	for (i = 0; i < 3; i++) {
		printf("%d. %s in %s with a population of %d people\n"
			, i+1, arr[i].Name, arr[i].Country, arr[i].Population);
	}
	return 0;
}
