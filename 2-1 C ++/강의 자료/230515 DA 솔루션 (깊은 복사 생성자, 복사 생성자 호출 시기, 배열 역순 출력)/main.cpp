#include <iostream>
using namespace std;
const int DEFAULT_ARR_SIZE = 4;
class DA
{
private:
	int* arr;
	int size;
public:
	DA();
	DA(int arraySize);
	DA(const DA& _d);
	~DA();
	//	DA& operator=( const DA& r);
		//getter and setter
	int getSize();
	void setSize(int s);
	int getArrElement(int index);
	void setArrElement(int index, int val);
};
DA::DA() {
	size = DEFAULT_ARR_SIZE;
	arr = new int[size];
	for (int i = 0; i < size; i++)
		arr[i] = 0;
	cout << "�Ű����� ���� ������" << endl;
}
DA::DA(int _size) {
	size = _size;
	arr = new int[size];
	for (int i = 0; i < size; i++)
		arr[i] = 0;
	cout << "�Ű����� �ִ� ������" << endl;
}
DA::DA(const DA& daObj) {
	size = daObj.size;
	arr = new int[size];
	for (int i = 0; i < size; i++)
		arr[i] = daObj.arr[i];
	cout << "���� ���� ������" << endl;

}
DA::~DA() {
	if (arr)
	{
		delete[] arr;
		arr = NULL;
	}
	cout << "�Ҹ��� " << endl;
}
//DA& DA::operator=(const DA& r)
//{
//	if (this != &r) // protect against invalid self-assignment 
//	{ 
//		delete [] arr; 
//		arr = new int[r.size ]; 
//		size = r.size;
//		for (int i=0; i<size; i++)
//			arr[i] = r.arr[i]; 
//	} 
//	cout << "���Կ����ڿ����ε�(���� ���� ������ copy assignment operator)" <<  endl;
//	return *this; 
//} 
int DA::getSize() {
	return size;
}
void DA::setSize(int s) {
	size = s;
}
int DA::getArrElement(int index) {
	return arr[index];
}
void DA::setArrElement(int index, int val) {
	arr[index] = val;
}

// Client
int func1(DA d)
{
	cout << "in func1()" << endl;
	return d.getSize();
}
DA func2(int num)
{
	cout << "in func2()" << endl;
	DA r(num);
	return r;
}
int main()
{
	// cout << "---�Ű�����, ���ϰ��� ��ü�� ���--- " << endl;
	// DA t1(3);
	// t1��ü�� �Ű������� ���޵Ǹ鼭(pass by value) ������������ڰ� �Ҹ���. pass by ref�� ��쿡�� no�������������
	//cout << func1(t1) << endl; 
	//DA t2;
	//t2 = func2(3);  // �Լ����� �Ѿ���鼭 temporary ��ü�� ���� ����� �����ǰ�, ������Կ����ڰ� �Ҹ���. 
	//cout << "---�Ű�����, ���ϰ��� ��ü�� ���--- " << endl;

	// �� ���� ������ �Է����� �����.
	int size;
	cout << "�� ���� ������ �Է��Ͻðڼ�? ";
	cin >> size;

	// �ʿ��� ��ŭ�� �޸𸮸� �غ��Ѵ�.
	DA da(size);

	// ������ �Է� �޴´�.
	int r;
	for (int i = 0; i < size; ++i)
	{
		cout << "�Է�: ";
		cin >> r;
		da.setArrElement(i, r); // setter
	}

	cout << "da �������: ";
	// �������� ������ ����Ѵ�.
	for (int i = size - 1; i >= 0; --i)
		cout << da.getArrElement(i) << " "; // getter

	cout << "\n";
	DA A(da);
	// �������� ������ ����Ѵ�.
	cout << "A �� ���: ";
	for (int i = 0; i < A.getSize(); i++)
		cout << A.getArrElement(i) << " "; // getter
	cout << endl;
	// ���� �޸𸮸� ������ �� �ʿ䰡 ����.
	//DA B(da);
	//B = A;
	//cout << "A info: "  << A.getSize() << endl;
	//cout << "B info: "  << B.getSize() << endl;
	//cout << "B �������: ";
	//for (int i = B.getSize() - 1; i >= 0; --i)
	//	cout << B.getArrElement(i) << " ";
	//cout << endl;
	//DA C(2);
	//C = da;
	//cout << "da info: "  << da.getSize() << endl;
	//cout << "C info: "  << C.getSize() << endl;
	//cout << "C �������: ";
	//for (int i = C.size - 1; i >= 0; --i)
	//	cout << C.arr[i] << " ";
	//cout << endl;
	return 0;
}