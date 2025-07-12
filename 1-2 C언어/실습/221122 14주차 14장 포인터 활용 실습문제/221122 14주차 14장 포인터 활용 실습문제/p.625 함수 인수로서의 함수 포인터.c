#include <stdio.h>
#include <math.h>

double f1(double k);
double f2(double k);
double formula(double (*pf)(double), int n);

int main(void)
{
	printf("%f\n", formula(f1, 10));          // f1을 인수로 formula를 호출한다.
	printf("%f\n", formula(f2, 10));
}

double formula(double (*pf)(double), int n)   // 함수 포인터를 매개변수로 받는다.
{
	int i;
	double sum = 0.0;

	for (i = 1; i < n; i++)
		sum += pf(i) * pf(i) + pf(i) + 1;

	return sum;

}

double f1(double k)        // f(k)=1/k
{
	return 1.0 / k;
}
double f2(double k)        // f(k)=cos(k)
{
	return cos(k);
}
