#ifndef HOTDOG_H
#define HOTDOG_H

class HotDogStand {
private:
	int IDNumber;
	int eachHotDogCount;

public:
	HotDogStand();
	HotDogStand(int IDNumber, int howManySold);
	HotDogStand(const HotDogStand& h);
	~HotDogStand();
	void justSold();      // eachHotDogCount�� kindofsetter
	int getEachHotDogCount(); // eachHotDogCount�� getter
	void setID(int IDNumber);    // idnumber�� setter
	int getID(); // idnumber�� getter

private:
	static int allHotDogCount;

public:
	static int getAllHotDogCount();
};

#endif