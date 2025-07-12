#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char op;
	int score, x, y, result;

	printf("수식을 입력하시오(예: 2 + 5) \n");
	printf(">>");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')
	{
		result = x + y;
		score = 0;
		printf("%d %c %d = %d \n", x, op, y, result);
	}
	else if (op == '-')
	{
		result = x - y;
		score = 0;
		printf("%d %c %d = %d \n", x, op, y, result);
	}
	else if (op == '*')
	{
		result = x * y;
		score = 0;
		printf("%d %c %d = %d \n", x, op, y, result);
	}
	else if (op == '/')
	{
		result = x / y;
		score = 0;
		printf("%d %c %d = %d \n", x, op, y, result);
	}
	else if (op == '%')
	{
		result = x % y;
		score = 0;
		printf("%d %c %d = %d \n", x, op, y, result);
	}
	else if (op == '&')
	{
		result = x & y;
		score = 1;
		printf("%08X %c %08X = %08X \n", x, op, y, result);
	}
	else if (op == '|')
	{
		result = x | y;
		score = 1;
		printf("%08X %c %08X = %08X \n", x, op, y, result);
	}
	else if (op == '^')
	{
		result = x ^ y;
		score = 1;
		printf("%08X %c %08X = %08X \n", x, op, y, result);
	}
	else
		printf("지원되지 않는 연산입니다. \n");

	if (score = 0)
		printf("%d %c %d = %d \n", x, op, y, result);
	else if (score = 1)
		printf("%08X %c %08X = %08X \n", x, op, y, result);

	return 0;
}