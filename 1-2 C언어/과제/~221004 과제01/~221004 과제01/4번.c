#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char x;                          //입력받을 문자를x로 두고 변수 선언한다. 문자열 형태일 것이므로 char로 변수 선언했다.  
	printf("문자를 입력하시오: ");
	x = getchar();                  //교수님께서 알려주신 내용으로 변수 x에 문자를 입력받는다.

	switch (x)                      //switch문을 사용해서 x에 입력받은 문자에 따라 각각 다르게 결과를 출력시키면 된다.
	{
	case 'C':                      //c는 C와 같으므로 이처럼 한꺼번에 처리될 수 있도록 한다.
	case 'c':
		printf("Circle");
		break;
	case 'R':                     //r는 R와 같으므로 이처럼 한꺼번에 처리될 수 있도록 한다.
	case 'r':
		printf("Rectangle");
		break;
	case 'T':                   //t는 T와 같으므로 이처럼 한꺼번에 처리될 수 있도록 한다.
	case 't':
		printf("Triangle");
		break;
	default:                   //나머지 경우는 모두 Unknown으로 처리하랬으니 default를 사용한다.
		printf("Unknown");
		break;
	}
	return 0;


}