#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>                                  //프로그램 실행 시 매번 다르게 난수를 생성하기 위함

int main(void)
{
	srand(time(NULL));                            //프로그램 실행 시 매번 다르게 난수를 생성하기 위함
	int c_rcp, u_rcp;            //컴퓨터의 가위바위보와 사용자의 가위바위보를 이와 같이 변수 선언한다.

	printf("가위바위보 중 무엇을 낼지 선택하시오(가위=1, 바위=2, 보=3): ");
	scanf("%d", &u_rcp);

	c_rcp = rand()%3 + 1;       //교수님께서 알려주신 내용이다 이를 통해 컴퓨터는 1,2,3 중 한개의 값을 얻는다.

	if (c_rcp == u_rcp)         //if문을 사용해서 비겼을때 이겼을때 그리고 나머지(=졌을때) 경우를 나누고 각각 결과를 출력시킨다.
		printf("비겼습니다. (컴퓨터 = %d, 사용자 = %d)", c_rcp, u_rcp);
	else if ((c_rcp == 1 && u_rcp == 2) || (c_rcp == 2 && u_rcp == 3) || (c_rcp == 3 && u_rcp == 1)) //논리연산자를 활용해서 이겼을때의 경우를 계산한다.
		printf("이겼습니다. (컴퓨터 = %d, 사용자 = %d)", c_rcp, u_rcp);
	else                                                                     //비긴 것도 이긴 것도 아니면 무조건 진 것이므로 귀찮게 더 작성할 필요 없이 else로 끝낸다.
		printf("졌습니다. (컴퓨터 = %d, 사용자 = %d)", c_rcp, u_rcp);







	return 0;
}