#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char op;                                  //������ ���� ������ �����Ѵ�. ������ �������̹Ƿ� char�� �����ߴ�.
	int x, y, result;

	printf("������ �Է��Ͻÿ�(��: 2 + 5) \n");
	printf(">>");
	scanf("%d %c %d", &x, &op, &y);          //op�� ������ �Է¹��� �����̹Ƿ� %c�� ���� �ۼ��Ѵ�.

	if (op == '&' || op == '|' || op == '^')   //��Ʈ�������� ��� ������ ����� ������¸� �����ϱ� ���� ��ó�� if������ �������ش�.
	{
		if (op == '&')          // if���� �̿��� ���� ����� ���α׷��� �ۼ��ѳ����̴�.
		result = x & y;        
	else if (op == '|')          
		result = x | y;         
	else if (op == '^')          
		result = x ^ y;         

	printf("%08X %c %08X = %08X \n", x, op, y, result);  //16������ ���·� ����ߴ�.
	
	}
	else {                                    //��Ʈ�����ڸ� ������ ������ �����̴�.
		if (op == '+')              // if���� �̿��� ���� ����� ���α׷��� �ۼ��ѳ����̴�.     
			result = x + y;         
		else if (op == '-')         
			result = x - y;         
		else if (op == '/')         
			result = x / y;         
		else if (op == '%')        
			result = x % y;

		printf("%d %c %d = %d \n", x, op, y, result);    
		}

		else
			printf("�������� �ʴ� �����Դϴ�. \n");
	}

	return 0;
}
