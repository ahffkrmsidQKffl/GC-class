#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int month;

	printf("���� �Է��Ͻÿ�: ");
	scanf("%d", &month);

	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("%d���� �ϼ��� 31���Դϴ�.", month);
		break;
	case 2:
		printf("%d���� �ϼ��� 28���Դϴ�.", month);
		break;
	default :
		printf("%d���� �ϼ��� 30���Դϴ�.", month);
		break;

	}
	return 0;

	

}
//å������ days��� �μ��� �ϳ� ���� 31 30 28 �׶��׶� �ִ½�