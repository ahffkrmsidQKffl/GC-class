#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

void menu(void);  //menu�Լ��� ������ ���� �������ش�
int add(int x, int y);   //add�Լ��� ������ ���� �������ش�
int sub(int x, int y);   //sub�Լ��� ������ ���� �������ش�
int mul(int x, int y);   //mul�Լ��� ������ ���� �������ش�
int divi(int x, int y);   //div�Լ��� ������ ���� �������ش�

void menu(void)  //menu�Լ��� �ۼ����ش� ���ϴ� �Լ��� �����ϱ����ؼ� �ʿ��� ��ȣ�� �̸� �˷��ش�
{
    printf("==================\n");
    printf("0. ����\n");
    printf("1. �y��\n");
    printf("2. ����\n");
    printf("3. ������\n");
    printf("4. ����\n");
    printf("==================\n");
}

int main(void)
{
    int choice, result, x, y;   //���� ����

    int (*pf[4])(int, int) = { add,sub,mul,divi };  //�Լ��������� �迭�� ����Ͽ��� pf[0]���� add�Լ� pf[1]���� sub�Լ� 
    //pf[2]���� mul�Լ� pf[3]���� divi�Լ��� �����Ѵ�
    while (1) //break���� �ޱ������� ���ѹݺ��� ����
    {
        menu(); //menu�Լ��� �θ���
        printf("�޴��� �����Ͻÿ�:");
        scanf("%d", &choice); //scanf�Լ��� ���ؼ� �޴��Լ��� �����Ͽ� add,sub,mul,divi�� ���ϴ� �Լ��� ��ȣ�� ����

        if (choice < 0 || choice >= 4)  //0�̸����̳� 4�̻��� �ԷµǸ� while���� ����ȴ�
            break;

        printf("2���� ������ �Է��Ͻÿ�:");    //��꿡�� ���� ���� 2���� scanf�� ���ؼ� �޴´�
        scanf("%d %d", &x, &y);

        result = pf[choice](x, y);   //������ �Է¹��� ��ȣ�� �Լ��� ȣ���Ѵ� ���� result�����ٰ� ȣ���� �Լ��� return���� �־��ֱ����ؼ� �ۼ��Ѵ�

        printf("���� ���= %d\n", result);   //�������� ��Ÿ���ش�

    }
    return 0;

}
int add(int x, int y)   //add�Լ� �ۼ��Ѵ�
{
    return x + y;
}
int sub(int x, int y)   //sub�Լ� �ۼ��Ѵ�
{
    return x - y;
}
int mul(int x, int y)   //mul�Լ� �ۼ��Ѵ�
{
    return x * y;
}
int divi(int x, int y)   //divi�Լ� �ۼ��Ѵ�
{
    return x / y;
}