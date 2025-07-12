#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int change;
	int price;
	int money = 10000;
	int f_thousand;
	int thousand;
	int f_hundred;
	int hundred;

	printf("물건 값을 입력하시오: \n");
	scanf("%d", &price);

	change = (money - price);
	f_thousand = change / 5000;
	thousand = (change % 5000) / 1000;
	f_hundred = (change % 1000) / 500;
	hundred = (change % 500) / 100;

	printf("사용자가 낸 돈: 10000 \n");
	printf("오천원권: %d장 \n", f_thousand);
	printf("천원권: %d장 \n", thousand);
	printf("오백원 동전: %d개 \n", f_hundred);
	printf("백원 동전: %d개 \n", hundred);

	return 0;
}