#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int big, small, d;

	printf("�ΰ��� ������ �Է��Ͻÿ�(ū ��, ���� ��): ");
	scanf("%d, %d", &big, &small);

	d = small;

	while (d > 0)
	{
		if (big % d == 0 && small % d == 0)
		{
			printf("�ִ� ������� %d�Դϴ�.", d);
			break;
		}
		else
			d = d - 1;

	
	}


}