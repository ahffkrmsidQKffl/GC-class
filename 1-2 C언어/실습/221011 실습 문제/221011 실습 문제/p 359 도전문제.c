#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double get_double()
{
	double x;
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &x);

	return x;
}

int get_integer()
{
	int x;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	return x;
}

char get_char()
{
	char x;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &x);

	return x;
}

int add()
{
	double a, b;
	a = get_double();
	b = get_double();
	printf("�Ǽ��� ��=%lf", a + b);
	return 0;
}

int sub()
{
	double a, b;
	a = get_double();
	b = get_double();
	printf("�Ǽ��� ��=%lf", a - b);
	return 0;
}

int mul()
{
	double a, b;
	a = get_double();
	b = get_double();
	printf("�Ǽ��� ��=%lf", a * b);
	return 0;
}
		
int div()
{
	double a, b;
	a = get_double();
	b = get_double();
	printf("�Ǽ��� ������=%lf", a / b);
	return 0;
}

int menu()
{
	int x;
	printf("���ϴ� ������ �Է��Ͻÿ�\n\n(���� = 1, ���� = 2, ������ = 3, ���� = 4) : ");
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