#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// int balance;      <-      도전문제 해결

int save(int amount)
{

	static int balance = 0;
	balance += amount;

	if (amount > 0)
		printf("%d            %d\n", amount, balance);
	else if (amount < 0)
		printf("       %d    %d\n", amount, balance);


}

int main()
{
	printf("======================\n");
	printf("입금     출금     잔고\n");
	printf("======================\n");
	save(10000);
	save(50000);
	save(-10000);
	save(30000);


}