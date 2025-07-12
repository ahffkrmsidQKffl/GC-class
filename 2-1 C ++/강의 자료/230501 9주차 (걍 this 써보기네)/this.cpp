#include <iostream>
using namespace std;
class WhoAmI {
private:
	int id;
public:
	WhoAmI(int id_arg);
	void ShowYourself();
};
WhoAmI::WhoAmI(int id_arg) {
	this->id = id_arg;
}
void WhoAmI::ShowYourself() { // void WhoAmI::ShowYourself(사실은 WhoAmI* this를 컴파일러가 넘김)
	cout << "(*this).id: " << (*this).id << " this: " << this << endl;
}
int main() {
	//WhoAmI obj; No constructor without parameter
	WhoAmI obj1(1);
	WhoAmI obj2(2);
	WhoAmI obj3(3);
	cout << "&obj1: " << &obj1 << endl;
	cout << "&obj2: " << &obj2 << endl;
	cout << "&obj3: " << &obj3 << endl;
	obj1.ShowYourself();
	obj2.ShowYourself();
	obj3.ShowYourself();
	return 0;
}