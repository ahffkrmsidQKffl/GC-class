#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff); // 함수 원형

int main(void)

{

	int sum = 0, diff = 0;                               // 변수 선언 및 초기화

	get_sum_diff(100, 200, &sum, &diff);   /* get_sum_diff 함수를 실행하되 인수 중 뒤에 두개는 참조에 의한 호출로 실행한다.
	                               그 경우에만 변수의 복사본이 아닌 원본이 함수로 전달된다. 
	                      그를 위해 sum와 diff에 주소 연산자 &를 사용해 변수의 값이 아니라 변수의 주소를 전달한다.*/

	printf("원소들의 합=%d\n", sum);  // 함수가 제대로 실행되었는지 확인하는 작업

	printf("원소들의 차=%d\n", diff); // 함수가 제대로 실행되었는지 확인하는 작업

	return 0;

}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff) /* get_sum_diff 함수를 실행하되 뒤의 두개 인수는 참조에 의한 호출로 실행한다.
                                                         그 경우에만 변수의 복사본이 아닌 원본이 함수로 전달된다.
									                     따라서 get_sum_diff 함수에서는 매개 변수 p_sum p_diff가 전달된 주소를 받아야 한다.
                                                         그를 위해 함수의 매개변수를 선언할때 포인터 변수로 선언해주었다. */

{

	*p_sum = x + y; /* *p_sum는 간접 참조 연산자인 *을 사용하여 포인터 변수 p_sum가 가리키는 주소에 저장된 '내용'을 참조한다.
				    즉 main 함수에서 실행될 때는 변수 sum에 해당한다. 
				    이때 이 변수 sum에 get_sum_diff의 매개변수 x와 y에 전달되는 인수의 값
					(각각 main 함수에서 100과 200에 해당)을 더한 뒤 할당했다. */

	*p_diff = x - y; /* *p_diff는 간접 참조 연산자인 *을 사용하여 포인터 변수 p_diff가 가리키는 주소에 저장된 '내용'을 참조한다.
				    즉 main 함수에서 실행될 때는 변수 diff에 해당한다. 
				    이때 이 변수 sum에 get_sum_diff의 매개변수 x와 y에 전달되는 인수의 값
					(각각 main 함수에서 100과 200에 해당)을 뺄셈한 뒤 할당했다. */

}