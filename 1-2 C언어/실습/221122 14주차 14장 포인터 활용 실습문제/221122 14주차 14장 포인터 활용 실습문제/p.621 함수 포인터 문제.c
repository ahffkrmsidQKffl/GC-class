#include <stdio.h>

int add(int, int);     
int sub(int, int);                // 함수 원형

int main(void)
{
	int result;
	int(*pf)(int, int);          // 함수 포인터 선언

	pf = add;                    /* 함수의 이름은 배열의 이름과 마찬가지로 시작 주소를 나타내는 포인터 상수로 간주.
								 따라서 배열의 경우와 마찬가지로 함수의 이름 앞에 & 연산자를 사용할 필요가 없으며
								 만약 반환형과 매개변수만 일치하면 이름이 다르더라도 함수를 바꿔가며 가리킬 수 있다. */
	result = pf(10, 20);
	printf("10+20은 %d\n", result);

	pf = sub;
	result = pf(10, 20);
	printf("10-20은 %d\n", result);


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