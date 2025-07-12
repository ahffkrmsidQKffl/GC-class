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

	printf("나무와의 길이(단위는 미터): ");
	scanf("%lf", &c);
	printf("측정자의 키(단위는 미터): ");
	scanf("%lf", &b);
	printf("각도(단위는 도): ");
	scanf("%lf", &a);

	h = b + tan(degree_to_radian(a)) * c;

	printf("나무의 높이(단위는 미터): %lf", h);

	return 0;



}



