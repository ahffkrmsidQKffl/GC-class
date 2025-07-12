#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char op;
	int x, y, result;

	printf("수식을 입력하시오(예: 2 + 5) \n");
	printf(">>");
	scanf("%d %c %d", &x, &op, &y);                   //여기까진 2번과 동일해서 설명할 부분이 없다.

	switch (op)                                       //switch 문을 이용해 수식 연산기 프로그램을 작성한내용이다. op를 여전히 수식 변수로 지정하고 case+문자열과 같은 형태로 제어식을 구분한다.
	{
	case '+':                                         //case 뒤에 오는 것이 문자이므로 따옴표를 반드시 써주어야한다.
		result = x + y;
		printf("%d %c %d = %d \n", x, op, y, result); //if문에서와는 달리 각각의 경우에 printf문을 작성했다.
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
		printf("지원되지 않는 연산입니다. \n");
		break;
	}

	return 0;
}