#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int score;
	int iscore;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &score);
	iscore = score / 10;
	
	switch (iscore) {
	case 10:
	case 9:
		printf("���� A\n");
		break;
	case 8:
		printf("���� B\n");
		break;
	case 7:
		printf("���� C\n");
		break;
	case 6:
		printf("���� D\n");
		break;
	default : 
		printf("���� F\n");
		break;

	}
}