#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char op;                                  //수식을 위한 변수를 선언한다. 수식은 문자형이므로 char로 선언했다.
	int x, y, result;

	printf("수식을 입력하시오(예: 2 + 5) \n");
	printf(">>");
	scanf("%d %c %d", &x, &op, &y);          //op는 수식을 입력받을 변수이므로 %c와 같이 작성한다.

	if (op == '&' || op == '|' || op == '^')   //비트연산자의 경우 나머지 연산과 출력형태를 구분하기 위해 이처럼 if문으로 나누어준다.
	{
		if (op == '&')          // if문을 이용해 수식 연산기 프로그램을 작성한내용이다.
		result = x & y;        
	else if (op == '|')          
		result = x | y;         
	else if (op == '^')          
		result = x ^ y;         

	printf("%08X %c %08X = %08X \n", x, op, y, result);  //16진수의 형태로 출력했다.
	
	}
	else {                                    //비트연산자를 제외한 나머지 연산이다.
		if (op == '+')              // if문을 이용해 수식 연산기 프로그램을 작성한내용이다.     
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
			printf("지원되지 않는 연산입니다. \n");
	}

	return 0;
}
