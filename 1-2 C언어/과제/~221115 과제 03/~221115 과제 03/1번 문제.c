#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define SIZE 10 //기호상수 선언
#define SQUARE(x) (x)*(x) //매크로함수 선언

double avg_f(int a[], int size);
double std_dev(int a[], int size, double avg); //함수 원형

int main()
{
    int arr[SIZE] = { 0 }; //배열 생성

    for (int i = 0; i < SIZE; i++) { //i가 SIZE보다 작으면 반복
        printf("데이터를 입력하시오: ");
        scanf("%d", &arr[i]); //배열에 데이터 입력
    }
    double avg = avg_f(arr, SIZE); //함수 avg_f의 반환값을 변수 avg로 지정
    printf("평균값은 %f\n", avg); //평균값 출력
    printf("표준편차값은 %f\n", std_dev(arr, SIZE, avg)); //표준편차값 출력
    return 0;
}
double avg_f(int a[], int size) { //평균값 함수
    static int sum = 0; //정적 지역 변수 선언 및 초기값 지정
    for (int i = 0; i < size; i++) { //i가 size보다 작으면 반복
        sum += a[i]; //sum에 배열의 요소의 값 더함
    }
    return sum / (double)size; //sum을 size로 나눠 평균값 반환
}
double std_dev(int a[], int size, double avg) { //표준편차값 함수
    double s = 0; //변수 s 선언
    for (int i = 0; i < size; i++) { //i가 size보다 작으면 반복
        s += SQUARE(a[i] - avg); //매크로 함수를 이용하여 표준편차를 구하기 위한 값 구함
    }
    return sqrt(s / size); //s를 size로 나눠 표준편차값 반환
}