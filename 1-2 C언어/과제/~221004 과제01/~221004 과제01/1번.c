#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES //M_PI, �� ���� �Լ��� ����ϱ� ���� define�ߴ�.
#include <math.h> //M_PI, �� ���� �Լ��� ����ϱ� ���� include�ߴ�.
#include <stdio.h>

int main(void)
{
	double r, surface_area, volume;      // �Ǽ������� ���� �޾ƾ� �ϱ� ������ ���� ���� �Ǽ������� �Ѵ�.

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &r);                    // �Ǽ����̹Ƿ� lf�� �Ἥ �Է¹ް� �Է¹��� ���� r�� �־��ش�.

	surface_area = 4*M_PI*r*r;           //ǥ���� ����, M_PI�� ������ ���� ���Ѵ�.
	volume = (4.0 / 3.0) * M_PI * r * r * r; // 4/3�� ���� ���������� ����ϸ� 1�� ���� �ǹǷ� 4.0, 3.0�� ���� �Ǽ������� ����ؾ� �Ѵ�.ü�� ����, M_PI�� ������ ���� ���Ѵ�.
	printf("�������� %lf�� ���� ǥ������ %lf�̰� ü���� %lf�Դϴ�.", r, surface_area, volume);
	return 0;
}
