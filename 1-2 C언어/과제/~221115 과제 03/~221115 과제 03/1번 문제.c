#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define SIZE 10 //��ȣ��� ����
#define SQUARE(x) (x)*(x) //��ũ���Լ� ����

double avg_f(int a[], int size);
double std_dev(int a[], int size, double avg); //�Լ� ����

int main()
{
    int arr[SIZE] = { 0 }; //�迭 ����

    for (int i = 0; i < SIZE; i++) { //i�� SIZE���� ������ �ݺ�
        printf("�����͸� �Է��Ͻÿ�: ");
        scanf("%d", &arr[i]); //�迭�� ������ �Է�
    }
    double avg = avg_f(arr, SIZE); //�Լ� avg_f�� ��ȯ���� ���� avg�� ����
    printf("��հ��� %f\n", avg); //��հ� ���
    printf("ǥ���������� %f\n", std_dev(arr, SIZE, avg)); //ǥ�������� ���
    return 0;
}
double avg_f(int a[], int size) { //��հ� �Լ�
    static int sum = 0; //���� ���� ���� ���� �� �ʱⰪ ����
    for (int i = 0; i < size; i++) { //i�� size���� ������ �ݺ�
        sum += a[i]; //sum�� �迭�� ����� �� ����
    }
    return sum / (double)size; //sum�� size�� ���� ��հ� ��ȯ
}
double std_dev(int a[], int size, double avg) { //ǥ�������� �Լ�
    double s = 0; //���� s ����
    for (int i = 0; i < size; i++) { //i�� size���� ������ �ݺ�
        s += SQUARE(a[i] - avg); //��ũ�� �Լ��� �̿��Ͽ� ǥ�������� ���ϱ� ���� �� ����
    }
    return sqrt(s / size); //s�� size�� ���� ǥ�������� ��ȯ
}