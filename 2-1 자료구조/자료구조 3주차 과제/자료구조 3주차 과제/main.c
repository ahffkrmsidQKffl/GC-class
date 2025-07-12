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
    print_poly(d, "�ΰ� ���׽��� ���� ��� = ");
    print_poly(c, "�ΰ� ���׽��� ���� ��� = ");
    return 0;

}

//���Ĵ�� ������ִ� �Լ�
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

//����� ������ �޴� �Լ�
Polynomial read_poly() {
    int i;
    Polynomial p;
    printf("���׽��� �ְ� ���� �Է�: ");
    scanf_s("%d", &p.degree);
    printf("�� ���� ����� �Է��Ͻÿ� (�� %d��): ", p.degree + 1);
    for (i = 0; i <= p.degree; i++)
        scanf_s("%f", p.coef + i);
    return p;
}

///�� ���׽��� ���ϴ� �Լ�
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

//�� ���׽��� ���ϴ� �Լ�
Polynomial mult_poly(Polynomial a, Polynomial b) {
    int i, j;
    Polynomial c;
    for (i = 0; i < a.degree + b.degree + 1; i++) //�迭 �ʱ�ȭ
        c.coef[i] = 0;
    c.degree = a.degree + b.degree;
    for (i = 0; i < a.degree + 1; i++)
        for (j = 0; j < b.degree + 1; j++)
            c.coef[i + j] += a.coef[i] * b.coef[j];
    return c;
}


