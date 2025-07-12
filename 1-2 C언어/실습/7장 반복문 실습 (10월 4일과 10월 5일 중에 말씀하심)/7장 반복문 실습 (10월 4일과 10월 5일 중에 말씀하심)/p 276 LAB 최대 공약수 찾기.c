#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int big, small, d;

	printf("두개의 정수를 입력하시오(큰 수, 작은 수): ");
	scanf("%d, %d", &big, &small);

	d = small;

	while (d > 0)
	{
		if (big % d == 0 && small % d == 0)
		{
			printf("최대 공약수는 %d입니다.", d);
			break;
		}
		else
			d = d - 1;

	
	}


}