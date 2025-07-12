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
	void justSold();      // eachHotDogCount의 kindofsetter
	int getEachHotDogCount(); // eachHotDogCount의 getter
	void setID(int IDNumber);    // idnumber의 setter
	int getID(); // idnumber의 getter

private:
	static int allHotDogCount;

public:
	static int getAllHotDogCount();
};

#endif