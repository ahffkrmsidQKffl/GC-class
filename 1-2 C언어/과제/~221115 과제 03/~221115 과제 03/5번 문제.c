#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_int(int *px, int *py);        // 함수 원형

int main(void)

{

	int x, y;               //변수를 선언만 하고 초기화는 하지 않았다.

	get_int(&x, &y);        /* get_int 함수를 실행하되 참조에 의한 호출로 실행한다.
	                        변수의 복사본이 아닌 원본이 함수로 전달된다. 
	                        그를 위해 x와 y에 주소 연산자 &를 사용해 변수의 값이 아니라 변수의 주소를 전달한다.*/

	printf("정수의 합은 %d \n", x + y); // get_int 함수로 x와 y에 값을 받고 올바르게 받았는지 확인하는 작업

	return 0;

}

void get_int(int *px, int *py)          /* get_int 함수를 실행하되 참조에 의한 호출로 실행한다.
                                        변수의 복사본이 아닌 원본이 함수로 전달된다.
									    따라서 get_int 함수에서는 매개 변수 px py가 전달된 주소를 받아야 한다.
                                        그를 위해 함수의 매개변수를 선언할때 포인터 변수로 선언해주었다. */

{
	printf("x와 y에 각각 값을 입력하시오(x y): ");
	scanf("%d %d", px, py);     /* scanf 함수는 변수에 값을 저장하는 함수이다.
							    그에 따라 참조에 의한 호출로 실행해야 하고,
								이를 위해 기본적으로 변수의 주소를 요구한다.
								단 get_int 함수에서 선언한 것은 포인터 변수 px, py이므로 
								기존처럼 &x, &y를 쓸 필요 없고(변수 x와 y를 함수 내에서 선언하지 않았으니 쓸 수도 없다.)
								대신 그 자리에 px, py를 써서 get_int 함수가 받을 인수의 값을 변경할 수 있다.
								*/
}

