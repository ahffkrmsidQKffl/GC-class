#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

struct student { //구조체 student를 선언
    int number;
    char name[20];
    double grade;
};

int main(void)
{
    struct student list[SIZE]; //구조체의 배열 선언
    int i, j, k;

    for (i = 0; i < SIZE; i++) { //10번 반복
        printf("학번%d을 입력하시오: ", i + 1); //몇번째 학생의 정보를 입력하는지 알기 위해 i+1을 문장에 표현
        scanf("%d", &list[i].number); //입력받은 값을 배열 원소들에 대입
        printf("이름%d을 입력하시오: ", i + 1);
        scanf("%s", list[i].name); //문자배열에는 주소연산자 &을 사용하지 않았다.
        printf("평점%d을 입력하시오(실수): ", i + 1);
        scanf("%lf", &list[i].grade);
    }

    struct student temp; //선택정렬을 위한 중간 배열 선언

    for (j = 0; j < SIZE; j++)
    {
        for (k = j; k < SIZE; k++)
            if (list[j].grade < list[k].grade) { //평점이 더 큰 값이 뒤에 오면 자리를 바꾼다.
                temp = list[j]; //중간 배열을 이용하여 자리를 바꾸면 j번째 자리에는 j번째 이상의 자리 중 가장 큰 수가 온다.
                list[j] = list[k];
                list[k] = temp;
            }

        printf("이름: %s, 학번: %d, 평점: %lf\n",
            list[j].name, list[j].number, list[j].grade); //j번째의 이름, 학번, 평점을 출력한다.
    } //for문이 끝나고 나면 평점이 높은 순서대로 출력이 되어있다.
    return 0;
}