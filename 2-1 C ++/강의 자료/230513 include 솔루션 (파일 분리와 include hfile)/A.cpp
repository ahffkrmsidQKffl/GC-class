#include <iostream>
#include "A.h"
#include "B.h"
using namespace std;
void A1() {
    cout << "in A1() " << endl;
    B1();
    B2();
}
void A2() { cout << "in A2() " << endl; }
void A3() { cout << "in A3() " << endl; }
