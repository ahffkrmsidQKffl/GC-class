#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

double degree_to_radian(double d)
{
	return d * (3.141592 / 180.0);
}

int main()
{
	double a, b, c, h, radians;

	printf("�������� ����(������ ����): ");
	scanf("%lf", &c);
	printf("�������� Ű(������ ����): ");
	scanf("%lf", &b);
	printf("����(������ ��): ");
	scanf("%lf", &a);

	h = b + tan(degree_to_radian(a)) * c;

	printf("������ ����(������ ����): %lf", h);

	return 0;



}



