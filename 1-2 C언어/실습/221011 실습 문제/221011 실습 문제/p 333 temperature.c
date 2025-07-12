#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int ctof();
int ftoc();

int menu()
{
	char menu_button;

	printf("'c' 섭씨온도에서 화씨온도로 변환\n");
	printf("'f' 화씨온도에서 섭씨온도로 변환\n");
	printf("'q' 종료\n");
	printf("메뉴에서 선택하세요: \n");
	scanf("%c", &menu_button);
	if (menu_button == 'c')
		ctof();
	else if (menu_button == 'f')
		ftoc();
	else
		printf("프로그램을 종료합니다.");

}

int ctof()
{
	double a;
	printf("섭씨온도: ");
	scanf("%lf", &a);
	a = 9.0 / 5.0 * (a + 32);
	printf("%lf", a);


}

int ftoc()
{
	double b;
	printf("섭씨온도: ");
	scanf("%lf", &b);
	b = (b - 32.0) * 5.0 / 9.0;
	printf("%lf", b);


}

int main(void)
{
	menu();
}