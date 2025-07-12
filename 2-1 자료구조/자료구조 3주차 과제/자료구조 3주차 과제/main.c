#include <stdio.h>
#define MAX_DEGREE 50

typedef struct {
    int degree;
    float coef[MAX_DEGREE];
}Polynomial;

void print_poly(Polynomial p, char str[]);
Polynomial read_poly();
Polynomial add_poly(Polynomial a, Polynomial b);
Polynomial mult_poly(Polynomial a, Polynomial b);

int main()
{
    int i;
    Polynomial a, b, c, d;
    a = read_poly();
    b = read_poly();
    c = add_poly(a, b);
    d = mult_poly(a, b);
    print_poly(d, "두개 다항식을 곱한 결과 = ");
    print_poly(c, "두개 다항식을 더한 결과 = ");
    return 0;

}

//형식대로 출력해주는 함수
void print_poly(Polynomial p, char str[]) {
    int i;
    printf("\t%s", str);
    for (i = 0; i < p.degree; i++) {
        printf("%5.1f x^%d ", p.coef[i], p.degree - i);
        if (p.coef[i + 1] > 0)
            printf("+");
    }
    printf("%4.1f\n", p.coef[p.degree]);

}

//계수와 차수를 받는 함수
Polynomial read_poly() {
    int i;
    Polynomial p;
    printf("다항식의 최고 차수 입력: ");
    scanf_s("%d", &p.degree);
    printf("각 항의 계수를 입력하시오 (총 %d개): ", p.degree + 1);
    for (i = 0; i <= p.degree; i++)
        scanf_s("%f", p.coef + i);
    return p;
}

///두 다항식을 더하는 함수
Polynomial add_poly(Polynomial a, Polynomial b) {
    int i;
    Polynomial c;
    if (a.degree > b.degree) {
        c = a;
        for (i = 0; i <= b.degree; i++)
            c.coef[i + (c.degree - b.degree)] += b.coef[i];
    }
    else {
        c = b;
        for (i = 0; i <= a.degree; i++)
            c.coef[i + (c.degree - a.degree)] += a.coef[i];
    }
    return  c;
}

//두 다항식을 곱하는 함수
Polynomial mult_poly(Polynomial a, Polynomial b) {
    int i, j;
    Polynomial c;
    for (i = 0; i < a.degree + b.degree + 1; i++) //배열 초기화
        c.coef[i] = 0;
    c.degree = a.degree + b.degree;
    for (i = 0; i < a.degree + 1; i++)
        for (j = 0; j < b.degree + 1; j++)
            c.coef[i + j] += a.coef[i] * b.coef[j];
    return c;
}


