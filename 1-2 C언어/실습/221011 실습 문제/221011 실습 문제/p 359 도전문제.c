#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double get_double()
{
	double x;
	printf("실수를 입력하시오: ");
	scanf("%lf", &x);

	return x;
}

int get_integer()
{
	int x;
	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	return x;
}

char get_char()
{
	char x;
	printf("문자를 입력하시오: ");
	scanf("%c", &x);

	return x;
}

int add()
{
	double a, b;
	a = get_double();
	b = get_double();
	printf("실수의 합=%lf", a + b);
	return 0;
}

int sub()
{
	double a, b;
	a = get_double();
	b = get_double();
	printf("실수의 차=%lf", a - b);
	return 0;
}

int mul()
{
	double a, b;
	a = get_double();
	b = get_double();
	printf("실수의 곱=%lf", a * b);
	return 0;
}
		
int div()
{
	double a, b;
	a = get_double();
	b = get_double();
	printf("실수의 나눗셈=%lf", a / b);
	return 0;
}

int menu()
{
	int x;
	printf("원하는 연산을 입력하시오\n\n(덧셈 = 1, 뺄셈 = 2, 나눗셈 = 3, 곱셈 = 4) : ");
	scanf("%d", &x);
	printf("\n");
	if (x == 1)
		add();
	else if (x == 2)
		sub();
	else if (x == 3)
		div();
	else if (x == 4)
		mul();

	return 0;

}

int main()
{
	menu();

}