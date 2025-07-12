#include <iostream>
#include <stdlib.h>
#include "hotdog.h"
using namespace std;

int main() {
	int count;
	cout << "Stand count(3��~10��) : ";
	cin >> count;
	HotDogStand* sList; 
	sList = new HotDogStand[count]; //HotDogStand* sList = new HotDogStand[count];�� ����, ���� ��ü �迭, �Ű����� ���� ������ �������
	for (int i = 0; i < count; i++) {
		sList[i].setID(i);
	}

    char input[10]; //char input �ϸ� if (input != 'q'�� ���� ������� ��..)
    while (true) {
        cout << "ID: ";
        cin >> input;
        if (strcmp(input, "q") != 0) {
            int tmp_input = atoi(input);
            for (int i = 0; i < count; i++) {
                if (sList[i].getID() == tmp_input) {
                    sList[i].justSold();
                }
            }

        }
        else
            break;
    }
    for (int i = 0; i < count; i++) {
        cout << "stand " << sList[i].getID() << " sold " << sList[i].getEachHotDogCount() << endl;
    }
    cout << "total sold = " << HotDogStand::getAllHotDogCount() << endl;
    delete[] sList; sList = NULL;
	return 0;
}