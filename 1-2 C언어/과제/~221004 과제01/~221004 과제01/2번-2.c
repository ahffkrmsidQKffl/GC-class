#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char op;
	int x, y, result;

	printf("������ �Է��Ͻÿ�(��: 2 + 5) \n");
	printf(">>");
	scanf("%d %c %d", &x, &op, &y);                   //������� 2���� �����ؼ� ������ �κ��� ����.

	switch (op)                                       //switch ���� �̿��� ���� ����� ���α׷��� �ۼ��ѳ����̴�. op�� ������ ���� ������ �����ϰ� case+���ڿ��� ���� ���·� ������� �����Ѵ�.
	{
	case '+':                                         //case �ڿ� ���� ���� �����̹Ƿ� ����ǥ�� �ݵ�� ���־���Ѵ�.
		result = x + y;
		printf("%d %c %d = %d \n", x, op, y, result); //if�������ʹ� �޸� ������ ��쿡 printf���� �ۼ��ߴ�.
		break;                                        
	case '-':
		result = x - y;
		printf("%d %c %d = %d \n", x, op, y, result);
		break;

	case '/':
		result = x / y;
		printf("%d %c %d = %d \n", x, op, y, result);
		break;
	case '%':
		result = x % y;
		printf("%d %c %d = %d \n", x, op, y, result);
		break;
	case '&':
		result = x & y;
		printf("%08X %c %08X = %08X \n", x, op, y, result);
		break;
	case '|':
		result = x | y;
		printf("%08X %c %08X = %08X \n", x, op, y, result);
		break;
	case '^':
		result = x ^ y;
		printf("%08X %c %08X = %08X \n", x, op, y, result);
		break;

	default:
		printf("�������� �ʴ� �����Դϴ�. \n");
		break;
	}

	return 0;
}