#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char x;                          //�Է¹��� ���ڸ�x�� �ΰ� ���� �����Ѵ�. ���ڿ� ������ ���̹Ƿ� char�� ���� �����ߴ�.  
	printf("���ڸ� �Է��Ͻÿ�: ");
	x = getchar();                  //�����Բ��� �˷��ֽ� �������� ���� x�� ���ڸ� �Է¹޴´�.

	switch (x)                      //switch���� ����ؼ� x�� �Է¹��� ���ڿ� ���� ���� �ٸ��� ����� ��½�Ű�� �ȴ�.
	{
	case 'C':                      //c�� C�� �����Ƿ� ��ó�� �Ѳ����� ó���� �� �ֵ��� �Ѵ�.
	case 'c':
		printf("Circle");
		break;
	case 'R':                     //r�� R�� �����Ƿ� ��ó�� �Ѳ����� ó���� �� �ֵ��� �Ѵ�.
	case 'r':
		printf("Rectangle");
		break;
	case 'T':                   //t�� T�� �����Ƿ� ��ó�� �Ѳ����� ó���� �� �ֵ��� �Ѵ�.
	case 't':
		printf("Triangle");
		break;
	default:                   //������ ���� ��� Unknown���� ó���Ϸ����� default�� ����Ѵ�.
		printf("Unknown");
		break;
	}
	return 0;


}