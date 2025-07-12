#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int month;

	printf("달을 입력하시오: ");
	scanf("%d", &month);

	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("%d월의 일수는 31일입니다.", month);
		break;
	case 2:
		printf("%d월의 일수는 28일입니다.", month);
		break;
	default :
		printf("%d월의 일수는 30일입니다.", month);
		break;

	}
	return 0;

	

}
//책에서는 days라는 인수를 하나 만들어서 31 30 28 그때그때 넣는식