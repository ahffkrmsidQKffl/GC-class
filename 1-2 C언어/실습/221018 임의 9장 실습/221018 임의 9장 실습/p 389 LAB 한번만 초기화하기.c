#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// int count; 도전문제 해결
int init();

int main()
{
	init();
	init();
	init();

}

int init()
{
	static int count = 0;

	if (count == 0)
		printf("네트워크 장치를 초기화합니다.\n");
	else
		printf("이미 초기화되었으므로 초기화하지 않습니다.\n");

	count += 1;

}