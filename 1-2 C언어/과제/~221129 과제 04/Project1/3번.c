#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

#define ROWS 5 // 기호 상수로 배열의 크기 지정
#define COLS 5 // 기호 상수로 배열의 크기 지정


double get_row_avg(int m[][COLS], int r); // 함수 원형
double get_row_avg_2(int m[][COLS]);      // 함수 원형
double get_total_avg(int m[][COLS]);      // 함수 원형

int main()
{
	srand((unsigned int)time(NULL));   // 매번 난수의 값을 다르게 하기 위해 작성
	int m[ROWS][COLS];                 // 2차원 배열 생성
	for (int a = 0; a < ROWS; a++)
		for (int b = 0; b < COLS; b++)
			m[a][b] = rand() % 100;    // 2차원 배열의 원소값을 난수로 입력

	for (int i = 0; i < ROWS; i++)     // 배열이 올바르게 생성되었는지 미리 출력해본다
	{
		for (int j = 0; j < COLS; j++)
			printf("%d ", m[i][j]);
		printf("\n");
	}
	printf("\n");
	printf("1행에 대한 평균: %lf\n", get_row_avg(m, 0)); // 인수로 배열과 행을 넣으면 그 행의 평균값만 산출하는 함수로 배열 m의 1행의 평균값 산출
	printf("2행에 대한 평균: %lf\n", get_row_avg(m, 1)); // 인수로 배열과 행을 넣으면 그 행의 평균값만 산출하는 함수로 배열 m의 2행의 평균값 산출
	printf("3행에 대한 평균: %lf\n", get_row_avg(m, 2)); // 인수로 배열과 행을 넣으면 그 행의 평균값만 산출하는 함수로 배열 m의 3행의 평균값 산출
	printf("4행에 대한 평균: %lf\n", get_row_avg(m, 3)); // 인수로 배열과 행을 넣으면 그 행의 평균값만 산출하는 함수로 배열 m의 4행의 평균값 산출
	printf("5행에 대한 평균: %lf\n", get_row_avg(m, 4)); // 인수로 배열과 행을 넣으면 그 행의 평균값만 산출하는 함수로 배열 m의 5행의 평균값 산출
	printf("\n");
	printf("전체 평균값: %lf\n", get_total_avg(m));      // 인수로 배열을 넣으면 전체 평균값을 산출하는 함수로 배열 m의 전체 평균값 산출
	printf("\n");
	get_row_avg_2(m);                                    // 인수로 배열을 넣으면 배열의 각 행별 평균값을 산출하는 함수로 배열 m의 각 행별  평균값 산출
}

double get_row_avg(int m[][COLS], int r) /* 인수로 배열과 행을 넣으면 그 행의 평균값만 산출하는 함수.
										 매개변수에 2차원 배열을 사용하여 함수의 인수로 2차원 배열을 받을 수 있게 했다.
										 */
{
	int* p, * endp;         // 포인터 변수 선언      
	double sum = 0.0;

	p = &m[r][0];           // p는 r행의 시작 주소
	endp = &m[r][COLS - 1]; // endp는 r행의 종료 주소

	while (p <= endp)       // while문을 사용해서 r행의 모든 원소의 합을 구한다.
		sum += *p++;        /* 간접 참조 연산자 '*'을 이용하여 
							포인터 변수 p가 가리키는 주소에 저장된 내용을 읽어와서 sum에 더 한다.
							(위에서 p를 r행의 시작 주소로 설정해놨으니 p는 r행의 첫번째 원소의 주소를 가리킨다. )
							이후 후위 증가 연산자를 통하여 p의 값을 증가시켜 r행의 다음 원소의 주소를 가리키게 한다.
							이후 다시 그 값을 '*"을 사용하여 sum에 더한다. 
							이 동작을 p가 r행의 종료 주소인 endp보다 커질때까지 반복한다.
							*/

	sum /= COLS;            // r행의 모든 원소의 합을 열의 크기(= r행의 모든 원소의 개수)로 나눠 평균을 구한다.

	return sum;             // 외부로 sum값을 반환한다.

}

double get_row_avg_2(int m[][COLS]) /* 인수로 배열을 넣으면 배열의 각 행별 평균값을 산출하는 함수
                                    매개변수에 2차원 배열을 사용하여 함수의 인수로 2차원 배열을 받을 수 있게 했다.
                                    */
{
	int* p, * endp;        // 포인터 변수 선언
	int r = 0;             // 행으로 사용할 변수 r을 선언
	double sum = 0.0;

	for (; r < ROWS; r++)  // r이 배열의 행의 크기인 ROWS(=5)와 같아질 때까지 반복문 실행, 즉 모든 행에 대하여 실행한다는 의미
	{
	p = &m[r][0];          // 여기부터 get_row_avg함수와 동일한 메커니즘
	endp = &m[r][COLS - 1]; 
	while (p <= endp)       
		sum += *p++;
	sum /= COLS;           // 여기까지 get_row_avg함수와 동일한 메커니즘
	printf("%d행에 대한 평균 : %lf\n", r, sum); // sum의 값을 출력
	sum = 0.0;             // for문으로 돌아가서 다시 다음 행의 sum을 계산하고 평균값을 출력해야 하기 때문에 여기서 sum을 0으로 초기화 
	}

	return 0; // 반환 값으로 평균값을 내보내는 함수가 아니기 때문에 0이라고 적었음

}

double get_total_avg(int m[][COLS]) /* 인수로 배열을 넣으면 전체 평균값을 산출하는 함수
									매개변수에 2차원 배열을 사용하여 함수의 인수로 2차원 배열을 받을 수 있게 했다.
									*/
{
	int* p, * endp;
	double sum = 0.0;

	p = &m[0][0];                 //p는 0행의 시작 주소
	endp = &m[ROWS-1][COLS - 1];  // endp는 (ROWS-1)행의 종료 주소

	while (p <= endp)             // p가 종료 주소보다 작거나 같으면
		sum += *p++;              // sum에 p가 가리키는 값 누적, 이후 p를 증가시켜서 다음 원소의 주소를 가리킴

	sum /= ROWS * COLS;           // 전체값 평균 계산을 위해 ROWS * COLS(=배열의 모든 원소 개수)로 sum을 나눠줌

	return sum;                   // 외부로 sum값을 반환

}