#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float e_rate;
	float og;
	float dollor;

	printf("ȯ���� �Է��Ͻÿ�: ");
	scanf("%f", &e_rate);

	printf("��ȭ�� �Է��Ͻÿ�: ");
	scanf("%f", &og);

	dollor = e_rate * og;

	printf("��ȭ%f���� %f�޷��Դϴ�.", og, dollor);

	return 0;
}

