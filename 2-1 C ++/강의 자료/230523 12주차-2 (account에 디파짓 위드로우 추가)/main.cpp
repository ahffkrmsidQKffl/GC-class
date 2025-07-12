#include <iostream>
#include "figure.h"
#include "triangle.h"
#include "rectangle.h"
#include "circle.h"

enum { CIRCLE = 1, RECT, TRIANGLE, DRAWALL, GETAREAALL, SEEPOINT, QUIT };
void printMenu();
void makeCircle(Figure** F, int& index);
void makeRectangle(Figure** F, int& index);
void makeTriangle(Figure** F, int& index);
void inquire(Figure** F, int index);
void cleanUp(Figure** F, int index);
const int ARR_MAX = 10;

int main()
{
    Figure* F[ARR_MAX];

    //while ���� �ȿ��� menu driven
    int index = 0;
    int choice;
    while (true) {
        printMenu();
        cout << "���� : ";
        cin >> choice;
        switch (choice) {
        case CIRCLE:
            makeCircle(F, &index);
            break;
        case RECT:
            makeRectangle(F, &index);
            break;
        case TRIANGLE:
            makeTriangle(F, &index);
            break;
        case DRAWALL:
            DrawAll(F, index);
            break;
        case GETAREAALL:
            GetAreaAll(F, index);
            break;
        case SEEPOINT:

            break;
        case QUIT:
            cout << "���α׷� ����" << endl;
            cleanUp(F, index);
            return 0;
        default:
            cout << "�߸� ���õ�" << endl;
            break;
        }
    }
    return 0;
}
void printMenu() {
    cout << "--------MENU---------" << endl;
    cout << "1. Circle �߰�" << endl;
    cout << "2. Rect �߰�" << endl;
    cout << "3. Triangle �߰�" << endl;
    cout << "4. ��ü �׸���" << endl;
    cout << "5. ��ü ���� ���ϱ�" << endl;
    cout << "6. ������ ����Ʈ ����" << endl;
    cout << "7. ����" << endl;

}

void makeCircle(Figure** F, int& index)
{
    string name;
    int x, y, r;
    cout << "name: ";
    cin >> name;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "radius: ";
    cin >> r;
    F[index] = new Circle(name, x, y, r);
    index++;
}

void makeRectangle(Figure** F, int& index)
{
    string name;
    int x, y, w ,h;
    cout << "name: ";
    cin >> name;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "width: ";
    cin >> w;
    cout << "height: ";
    cin >> h; 
    F[index] = new Rectangle(name, x, y, w, h);
    index++;
}

void makeTriangle(Figure** F, int& index)
{
    string name;
    int x, y, b, h;
    cout << "name: ";
    cin >> name;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "base: ";
    cin >> b;
    cout << "height: ";
    cin >> h;
    F[index] = new Triangle(name, x, y, b, h);
    index++;
}

void DrawAll(Figure** F, int index) {
    for (int i = 0; i < index; i++) {
        (*(F + i))->DrawAll();
    }
}


void GetAreaAll(Figure** F, int index) {
    for (int i = 0; i < index; i++) {
        (*(F + i))->getArea();
    }
}

void cleanUp(Figure** F, int index) {
    for (int i = 0; i < index; i++) {
        delete F; F = NULL;
    }
}
