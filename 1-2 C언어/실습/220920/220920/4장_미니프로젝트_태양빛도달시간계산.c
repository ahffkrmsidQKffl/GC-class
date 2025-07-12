#include <stdio.h>

int main(void)
{
	double speed_light = 300000.000000;
	double distance = 149600000.000000;
	double time;

	time = distance / speed_light;

	printf("빛의 속도는 %lfkm/s\n태양과 지구의 거리 %lfkm\n도달 시간은 %lf초", speed_light, distance, time);

	return 0;



}