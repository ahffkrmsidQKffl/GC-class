#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// int count; �������� �ذ�
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
		printf("��Ʈ��ũ ��ġ�� �ʱ�ȭ�մϴ�.\n");
	else
		printf("�̹� �ʱ�ȭ�Ǿ����Ƿ� �ʱ�ȭ���� �ʽ��ϴ�.\n");

	count += 1;

}