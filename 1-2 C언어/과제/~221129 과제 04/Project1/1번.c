#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

struct student { //����ü student�� ����
    int number;
    char name[20];
    double grade;
};

int main(void)
{
    struct student list[SIZE]; //����ü�� �迭 ����
    int i, j, k;

    for (i = 0; i < SIZE; i++) { //10�� �ݺ�
        printf("�й�%d�� �Է��Ͻÿ�: ", i + 1); //���° �л��� ������ �Է��ϴ��� �˱� ���� i+1�� ���忡 ǥ��
        scanf("%d", &list[i].number); //�Է¹��� ���� �迭 ���ҵ鿡 ����
        printf("�̸�%d�� �Է��Ͻÿ�: ", i + 1);
        scanf("%s", list[i].name); //���ڹ迭���� �ּҿ����� &�� ������� �ʾҴ�.
        printf("����%d�� �Է��Ͻÿ�(�Ǽ�): ", i + 1);
        scanf("%lf", &list[i].grade);
    }

    struct student temp; //���������� ���� �߰� �迭 ����

    for (j = 0; j < SIZE; j++)
    {
        for (k = j; k < SIZE; k++)
            if (list[j].grade < list[k].grade) { //������ �� ū ���� �ڿ� ���� �ڸ��� �ٲ۴�.
                temp = list[j]; //�߰� �迭�� �̿��Ͽ� �ڸ��� �ٲٸ� j��° �ڸ����� j��° �̻��� �ڸ� �� ���� ū ���� �´�.
                list[j] = list[k];
                list[k] = temp;
            }

        printf("�̸�: %s, �й�: %d, ����: %lf\n",
            list[j].name, list[j].number, list[j].grade); //j��°�� �̸�, �й�, ������ ����Ѵ�.
    } //for���� ������ ���� ������ ���� ������� ����� �Ǿ��ִ�.
    return 0;
}