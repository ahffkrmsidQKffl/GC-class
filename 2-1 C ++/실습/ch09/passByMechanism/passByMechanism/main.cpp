/***************************************************************
 * This program shows how a change in the parameter cannot 	 *
 * affect the corresponding argument in pass-by-value. 	 *
 ***************************************************************/
#include <iostream>
using namespace std;

// Function declaration
void swapByValue(int i, int j);
void swapByReference(int& ri, int& rj);


int main()
{
	int a = 10, b = -20;
	swapByReference(a, b);
	cout << "after ™®¹ÙŽ³ a: " << a << " b : " << b << endl;
	/*swapByValue(a, b);
	cout << "after ™®¹Ù¹ë a: " << a << " b : " << b << endl;*/
	
	return 0;
}

void swapByValue(int i, int j)
{
	int tmp = i;
	i = j;
	j = tmp;
	cout << "in ™®¹Ù¹ë i: " << i << " j: " << j << endl;
	return;
}

void swapByReference(int& ri, int& rj)
{
	int tmp = ri;
	ri = rj;
	rj = tmp;
	cout << "in ™®¹ÙŽ³ i: " << ri << " j: " << rj << endl;
	return;
}