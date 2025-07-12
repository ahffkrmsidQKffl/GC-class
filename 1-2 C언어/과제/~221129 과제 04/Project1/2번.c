#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

void menu(void);  //menu함수의 원형을 먼저 정의해준다
int add(int x, int y);   //add함수의 원형을 먼저 정의해준다
int sub(int x, int y);   //sub함수의 원형을 먼저 정의해준다
int mul(int x, int y);   //mul함수의 원형을 먼저 정의해준다
int divi(int x, int y);   //div함수의 원형을 먼저 정의해준다

void menu(void)  //menu함수를 작성해준다 원하는 함수를 실행하기위해서 필요한 번호를 미리 알려준다
{
    printf("==================\n");
    printf("0. 덧셈\n");
    printf("1. 뻴셈\n");
    printf("2. 곱셈\n");
    printf("3. 나눗셈\n");
    printf("4. 종료\n");
    printf("==================\n");
}

int main(void)
{
    int choice, result, x, y;   //변수 설정

    int (*pf[4])(int, int) = { add,sub,mul,divi };  //함수포인터의 배열을 사용하여서 pf[0]에는 add함수 pf[1]에는 sub함수 
    //pf[2]에는 mul함수 pf[3]에는 divi함수를 저장한다
    while (1) //break문을 받기전까지 무한반복문 시작
    {
        menu(); //menu함수를 부른다
        printf("메뉴를 선택하시오:");
        scanf("%d", &choice); //scanf함수를 통해서 메뉴함수를 참고하여 add,sub,mul,divi중 원하는 함수의 번호를 고른다

        if (choice < 0 || choice >= 4)  //0미만값이나 4이상값이 입력되면 while문이 종료된다
            break;

        printf("2개의 정수를 입력하시오:");    //계산에서 쓰일 정수 2개를 scanf를 통해서 받는다
        scanf("%d %d", &x, &y);

        result = pf[choice](x, y);   //위에서 입력받은 번호로 함수를 호출한다 또한 result값에다가 호출한 함수의 return값을 넣어주기위해서 작성한다

        printf("연산 결과= %d\n", result);   //연산결과를 나타내준다

    }
    return 0;

}
int add(int x, int y)   //add함수 작성한다
{
    return x + y;
}
int sub(int x, int y)   //sub함수 작성한다
{
    return x - y;
}
int mul(int x, int y)   //mul함수 작성한다
{
    return x * y;
}
int divi(int x, int y)   //divi함수 작성한다
{
    return x / y;
}