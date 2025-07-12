#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern unsigned random_i(void);
extern double random_f(void);

extern int MOD;


int main()
{
	MOD = 10;

	printf("%d\n", random_i());
	printf("%d\n", random_i());

	printf("%d\n", random_i());

	printf("%d\n", random_i());
	printf("%d\n", random_i());
	printf("%d\n", random_i());



	

	printf("%f\n", random_f());
	printf("%f\n", random_f());
	printf("%f\n", random_f());
	printf("%f\n", random_f());
	printf("%f\n", random_f());
	printf("%f\n", random_f());

}