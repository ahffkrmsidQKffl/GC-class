#include <stdio.h>

int main(void)
{
	double speed_light = 300000.000000;
	double distance = 149600000.000000;
	double time;

	time = distance / speed_light;

	printf("���� �ӵ��� %lfkm/s\n�¾�� ������ �Ÿ� %lfkm\n���� �ð��� %lf��", speed_light, distance, time);

	return 0;



}