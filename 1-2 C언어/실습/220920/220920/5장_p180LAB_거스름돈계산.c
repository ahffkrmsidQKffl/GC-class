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

	printf("���� ���� �Է��Ͻÿ�: \n");
	scanf("%d", &price);

	change = (money - price);
	f_thousand = change / 5000;
	thousand = (change % 5000) / 1000;
	f_hundred = (change % 1000) / 500;
	hundred = (change % 500) / 100;

	printf("����ڰ� �� ��: 10000 \n");
	printf("��õ����: %d�� \n", f_thousand);
	printf("õ����: %d�� \n", thousand);
	printf("����� ����: %d�� \n", f_hundred);
	printf("��� ����: %d�� \n", hundred);

	return 0;
}