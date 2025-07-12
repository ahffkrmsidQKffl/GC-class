#include <stdio.h>

int add(int, int);     
int sub(int, int);                // �Լ� ����

int main(void)
{
	int result;
	int(*pf)(int, int);          // �Լ� ������ ����

	pf = add;                    /* �Լ��� �̸��� �迭�� �̸��� ���������� ���� �ּҸ� ��Ÿ���� ������ ����� ����.
								 ���� �迭�� ���� ���������� �Լ��� �̸� �տ� & �����ڸ� ����� �ʿ䰡 ������
								 ���� ��ȯ���� �Ű������� ��ġ�ϸ� �̸��� �ٸ����� �Լ��� �ٲ㰡�� ����ų �� �ִ�. */
	result = pf(10, 20);
	printf("10+20�� %d\n", result);

	pf = sub;
	result = pf(10, 20);
	printf("10-20�� %d\n", result);


	return 0;

}

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}