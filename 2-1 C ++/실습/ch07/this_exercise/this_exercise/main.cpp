#include <iostream>
using namespace std;
class WhoAmI {
private:
	int id;

public:
	WhoAmI(int id);
	void ShowYourSelf();
};

WhoAmI::WhoAmI(int id) {
	this->id = id;
}
void WhoAmI::ShowYourSelf() { //void WhoAmI::ShowYourSelf(사실은 WhoAmI* this를 컴파일러가 넘김)
	cout << "this->id: " << this->id << "this: " << this << endl;
}
int main() {
	//WhoAmI obj; <~ 그거 없잖아 parameter 없는 생성자
	WhoAmI obj1(1);
	WhoAmI obj2(2);
	WhoAmI obj3(3);
	cout << "&obj1: " << &obj1 << endl;
	cout << "&obj2: " << &obj2 << endl;
	cout << "&obj3: " << &obj3 << endl;
	obj1.ShowYourSelf();
	obj2.ShowYourSelf();
	obj3.ShowYourSelf();

	return 0;
}