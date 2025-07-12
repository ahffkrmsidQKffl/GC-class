#include <iostream>
#include "B.h"
#include "A.h"
using namespace std;
void B1() { cout << "in B1() " << endl; }
void B2() {
    cout << "in B2() " << endl;
    A2();
    B1();
}
