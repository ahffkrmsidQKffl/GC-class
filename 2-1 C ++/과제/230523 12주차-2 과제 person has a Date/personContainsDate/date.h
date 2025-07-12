#ifndef DATE_H 
#define DATE_H 
class Date {
private:
	int month;
	int day;
	int year;
public:
	Date();
	Date(int month, int day, int year);
	Date(const Date& d);
	~Date();
	void print() const;
};
#endif 

