#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int ctof();
int ftoc();

int menu()
{
	char menu_button;

	printf("'c' �����µ����� ȭ���µ��� ��ȯ\n");
	printf("'f' ȭ���µ����� �����µ��� ��ȯ\n");
	printf("'q' ����\n");
	printf("�޴����� �����ϼ���: \n");
	scanf("%c", &menu_button);
	if (menu_button == 'c')
		ctof();
	else if (menu_button == 'f')
		ftoc();
	else
		printf("���α׷��� �����մϴ�.");

}

int ctof()
{
	double a;
	printf("�����µ�: ");
	scanf("%lf", &a);
	a = 9.0 / 5.0 * (a + 32);
	printf("%lf", a);


}

int ftoc()
{
	double b;
	printf("�����µ�: ");
	scanf("%lf", &b);
	b = (b - 32.0) * 5.0 / 9.0;
	printf("%lf", b);


}

int main(void)
{
	menu();
}