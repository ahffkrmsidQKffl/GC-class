#include <stdio.h>

int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };

	printf("a = %u\n", a);

	printf("a + 1 = %u\n", a + 1);

	printf("*a = %u\n", *a);

	printf("*(a+1) = %u\n", *(a + 1));

}