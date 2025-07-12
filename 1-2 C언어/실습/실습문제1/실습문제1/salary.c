#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int msalary;
	int ysalary;
	
	printf("연봉을 입력하시오(단위:만원): ");
	scanf("%d", &ysalary);

	msalary = ysalary / 12;
	printf("월수령액(단위:만원): %d", msalary);

	return 0;
}
*/