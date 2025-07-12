#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#define size_s 3   // 기호 상수로 배열의 크기 지정

void sort_strings(char *list[], int size); // 함수 원형

int main(void)
{
	char *s[size_s] = {           // 문자형 포인터 배열 생성
		"mycopy",
		"src",
		"dst"
	};

	printf("정렬 전\n");         // 정렬 전 출력
	for (int i = 0; i < size_s; i++)
		printf("s[%d]=%s \n", i, s[i]);  

	sort_strings(s, size_s);     // 정렬 함수로 정렬

	printf("정렬 후\n");         // 정렬 후 출력
	for (int i = 0; i < size_s; i++)
		printf("s[%d]=%s \n", i, s[i]);

}

void sort_strings(char *list[], int size) // 버블 정렬 함수, 매개변수로 문자형 포인터 배열과 배열의 크기를 받는다.
/* 버블 정렬 함수의 알고리즘:
배열의 첫번째 요소를 최소값(least)으로 설정한 뒤 두번째 요소와 비교하여 다시 최소값(least)을 설정한다.
세번째 요소를 새로 설정된 최소값 요소와 비교하여 다시 최소값을 설정한다. 
이 설정을 마지막 요소까지 반복한다. (45~48번째줄까지의 내용)
이 반복이 끝나고 최종적으로 설정된 최소값 요소를 배열의 맨 처음 요소와 교환한다. (50~52번째줄까지의 내용)
그러면 첫번째 요소에는 배열의 모든 요소 중 최소값이 현재 배정되어 있다.
이젠 배열의 두번째 요소를 최소값으로 설정한 뒤 위의 작업을 다시 반복(세번째 요소부터 비교) (43번째줄 for문에서 i가 1로 갱신되고 반복문이 다시 시작)
첫번째를 제외한 나머지 요소들 중 최소값을 두번째 요소에 오게 한다.
이 작업을 뒤에서부터 두번째 요소(size-1)까지 반복하면 정렬이 끝난다. 
(마지막 요소는 비교할 대상이 없으므로 수행할 필요가 없다.)*/
{
	int i, j, least;
	char *temp; // 요소 교환을 위한 변수 선언, 교환할 요소들이 포인터이기 때문에 포인터 변수로 선언해야한다

	for (i = 0; i < size - 1; i++)                //마지막 요소는 비교할 대상이 없으므로 뒤에서부터 두번째 요소까지만 작업을 반복
	{
		least = i;                                // i번째 값을 최소값으로 설정
		for (j = i + 1; j < size; j++)            // i+1번째부터 최소값 탐색 시작
			if (strcmp(list[j], list[least]) < 0) // strcmp 함수로 문자열을 비교해서 list[j]가 더 앞에 있을 경우
				least = j;                        // j를 최소값으로 설정
		
		temp = list[i];         // i번째 요소와 least 위치의 요소를 교환을 위한 작업 첫번째: temp에 i번째 요소 값을 저장
		list[i] = list[least];  // i번째 요소와 least 위치의 요소를 교환을 위한 작업 두번째: i번째 요소에 least 위치의 요소 값을 저장 
		list[least] = temp;     // i번째 요소와 least 위치의 요소를 교환을 위한 작업 세번째: least 위치의 요소에 temp 값을 저장
	}

}

/* my: 문자형 포인터 배열과 그냥 2차원 문자 배열의 차이가 데이터 낭비 뿐이라면
지금 이 전체도 2차원 문자 배열로 고쳐볼 수 있어야 함 */