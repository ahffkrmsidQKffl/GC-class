#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char op;
	int score, x, y, result;

	printf("������ �Է��Ͻÿ�(��: 2 + 5) \n");
	printf(">>");
	scanf("%d %c %d", &x, &op, &y);

	switch (op)
	{
	case '+' :
		result = x + y;
		score = 0;
		printf("%d %c %d = %d \n", x, op, y, result);
		break;
	case '-' :
		result = x - y;
		score = 0;
		printf("%d %c %d = %d \n", x, op, y, result);
		break;

	case '*' :
		result = x * y;
		score = 0;
		printf("%d %c %d = %d \n", x, op, y, result);
		break;
	case '/':
		result = x / y;
		score = 0;
		printf("%d %c %d = %d \n", x, op, y, result);
		break;
	case '%':
		result = x % y;
		score = 0;
		printf("%d %c %d = %d \n", x, op, y, result);
		break;
	case '&':
		result = x & y;
		score = 1;
		printf("%08X %c %08X = %08X \n", x, op, y, result);
		break;
	case '|':
		result = x | y;
		score = 1;
		printf("%08X %c %08X = %08X \n", x, op, y, result);
		break;
	case '^':
		result = x ^ y;
		score = 1;
		printf("%08X %c %08X = %08X \n", x, op, y, result);
		break;

	default:
		printf("�������� �ʴ� �����Դϴ�. \n");
		break;
	}

	return 0;
}