#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES //M_PI, 즉 파이 함수를 사용하기 위해 define했다.
#include <math.h> //M_PI, 즉 파이 함수를 사용하기 위해 include했다.
#include <stdio.h>

int main(void)
{
	double r, surface_area, volume;      // 실수형으로 값을 받아야 하기 때문에 변수 선언도 실수형으로 한다.

	printf("구의 반지름을 입력하시오: ");
	scanf("%lf", &r);                    // 실수형이므로 lf를 써서 입력받고 입력받은 값을 r에 넣어준다.

	surface_area = 4*M_PI*r*r;           //표면적 공식, M_PI는 원주율 값을 뜻한다.
	volume = (4.0 / 3.0) * M_PI * r * r * r; // 4/3과 같이 정수형으로 계산하면 1이 값이 되므로 4.0, 3.0과 같이 실수형으로 계산해야 한다.체적 공식, M_PI는 원주율 값을 뜻한다.
	printf("반지름이 %lf인 구의 표면적은 %lf이고 체적은 %lf입니다.", r, surface_area, volume);
	return 0;
}
