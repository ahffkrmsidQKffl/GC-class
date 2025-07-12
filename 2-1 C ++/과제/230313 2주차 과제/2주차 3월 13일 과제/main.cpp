#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char password[100];
    cout << "프로그램을 종료하려면 암호를 입력하십시오." << endl;
    while (true) {
        cout << "암호 입력: ";
        cin.getline(password, 100, '\n');

        if (strcmp(password, "C ++") == 0) {
            cout << "password is correct. 프로그램을 정상 종료합니다." << endl;
            break;
        }
        else if (strcmp(password, "") == 0) {
            cout << "입력중지. 프로그램을 정상 종료합니다." <<  endl;
            break;
        }
        else {
            cout << "잘못된 암호임." << endl;
        }
      
    }
}