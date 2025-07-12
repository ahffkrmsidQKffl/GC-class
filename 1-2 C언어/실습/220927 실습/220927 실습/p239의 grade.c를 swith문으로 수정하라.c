#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int score;
	int iscore;
	printf("성적을 입력하시오: ");
	scanf("%d", &score);
	iscore = score / 10;
	
	switch (iscore) {
	case 10:
	case 9:
		printf("학점 A\n");
		break;
	case 8:
		printf("학점 B\n");
		break;
	case 7:
		printf("학점 C\n");
		break;
	case 6:
		printf("학점 D\n");
		break;
	default : 
		printf("학점 F\n");
		break;

	}
}