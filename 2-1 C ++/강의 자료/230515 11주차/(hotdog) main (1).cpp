//hotdogs.cpp
//This program defines a class for tracking hot dog sales.
//
//It tracks the stand's ID number, hot dogs sold at each stand,
//  and hot dogs sold at all stands.

#include <iostream>
//#include <cstdlib>

using namespace std;

class HotDogStand
{
public:
	HotDogStand();
	HotDogStand(int newID, int newNnumSold);
	int GetID();
	void SetID(int newID);
	void JustSold();
	int GetNumSold();
private:
	int numSold;
	int ID;

public:
	static int GetTotalSold();
private:
	static int totalSold;
};

int HotDogStand::totalSold = 0;


// ======================
// HotDogStand::HotDogStand
// The default constructor initializes the ID and num sold to zero.
// ======================
HotDogStand::HotDogStand()
{
	numSold = 0;
	ID = 0;
}

// ======================
// HotDogStand::HotDogStand
// This constructor initializes the ID and num sold.
// ======================
HotDogStand::HotDogStand(int newID, int newNumSold)
{
	numSold = newNumSold;
	ID = newID;
}

// ======================
// HotDogStand::GetID
// Returns the ID number of this stand.
// ======================
int HotDogStand::GetID()
{
	return ID;
}

// ======================
// HotDogStand::SetID
// Sets the ID number of this stand.
// ======================
void HotDogStand::SetID(int newID)
{
	ID = newID;
}

// ======================
// HotDogStand::JustSold
// Increments the number of hotdogs this stand
// has sold by one.
// ======================
void HotDogStand::JustSold()
{
	numSold++;	// increment number sold at this stand
	totalSold++;    // increment number sold across all stands
}

// ======================
// HotDogStand::GetNumSold
// Returns the number of hotdogs this stand has sold.
// ======================
int HotDogStand::GetNumSold()
{
	return numSold;
}

// ======================
// HotDogStand::GeTotalSold
// Returns the number of hotdogs sold by all stands
// ======================
int HotDogStand::GetTotalSold()
{
	return totalSold;
}


//
// --------------------------------
// --------- END USER CODE --------
// --------------------------------



// ======================
//     main function
// ======================
int main()
{
	int count;
	HotDogStand* sList;
	cout << "Stand count(3��~10��) : ";
	cin >> count;
	sList = new HotDogStand[count]; // ������ü�迭
	for (int i = 0; i < count; i++) {
		sList[i].SetID(i);
	}
	char input;
	while (true)
	{
		cout << "ID : ";
		cin >> input;
		if (input == 'q' || input == 'Q')
			break;
		int id = input - '0'; // stoi() �Լ� ���(string ����)
		if (id >= 0 && id < count) // �ε��� ���� �ȿ� ���
			sList[id].JustSold();
	}

	for (int i = 0; i < count; i++) {
		cout << "Stand " << sList[i].GetID();
		cout << " sold " << sList[i].GetNumSold() << endl;
	}

	cout << "Total sold = " << HotDogStand::GetTotalSold() << endl;

	if (sList)
		delete[] sList;
	sList = NULL;

	//// Test our code with three hot dog stands
	//HotDogStand s1(1,0),s2(2,0),s3(3,0);
	//
	//// Sold at stand 1, 2
	//s1.JustSold();
	//s2.JustSold();
	//s1.JustSold();

	//cout << "Stand " << s1.GetID() << " sold " << s1.GetNumSold() << endl;
	//cout << "Stand " << s2.GetID() << " sold " << s2.GetNumSold() << endl;
	//cout << "Stand " << s3.GetID() << " sold " << s3.GetNumSold() << endl;
	//cout << "Total sold = " << HotDogStand::GetTotalSold() << endl;
	//cout << "Total sold = " << s1.GetTotalSold() << endl;
	//cout << endl;

	//// Sold some more
	//s3.JustSold();
	//s1.JustSold();

	//cout << "Stand " << s1.GetID() << " sold " << s1.GetNumSold() << endl;
	//cout << "Stand " << s2.GetID() << " sold " << s2.GetNumSold() << endl;
	//cout << "Stand " << s3.GetID() << " sold " << s3.GetNumSold() << endl;
	//cout << "Total sold = " << HotDogStand::GetTotalSold() << endl;
	//cout << "Total sold = " << s1.GetTotalSold() << endl;
	//cout << endl;
	return 0;
}
