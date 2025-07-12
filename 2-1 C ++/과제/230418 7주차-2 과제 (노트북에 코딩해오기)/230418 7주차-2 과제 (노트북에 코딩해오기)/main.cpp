#include <iostream>
using namespace std;

const int MAX = 100;

class Account {
private: 
    int id;
    int balance;
    char name[MAX];
public:
    // 3개의 constructor, 1개의 destructor
    Account();
    Account(int id, int balance, const char* name);
    Account(const Account& a);
    ~Account();
    // getter & setter 각 3개씩
    int getId();
    int getBalance();
    char* getName();
    void setId(int id);
    void setBalance(int balance);
    void setName(const char* name);
    // void inMoney(int val); // val만큼 balance가 추가됨(입금)
    void inMoney(int val);
    // void outMoney(int val); //val만큼 balance가 빠짐(출금)
    void outMoney(int val);
};

Account::Account() {
    cout << "매개변수 없는 생성자" << endl;
    this->id = 0;
    this->balance = 0;
    this->name[0] = '\0';
}
Account::Account(int id, int balance, const char* name) {
    cout << "매개변수 있는 생성자" << endl;
    this->id = id;
    this->balance = balance;
    strcpy_s(this->name, MAX, name);
}
Account::Account(const Account& a) {
    cout << "복사 생성자" << endl;
    this->id = a.id;
    this->balance = a.balance;
    strcpy_s(this->name, MAX, a.name);
}
Account::~Account() {
    cout << "소멸자" << endl;
}
int Account::getId() {
    return this->id;
}
int Account::getBalance() {
    return this->balance;
}
char* Account::getName() {
    return this->name;
}
void Account::setId(int id) {
    this->id = id;
}
void Account::setBalance(int balance) {
    this->balance = balance;
}
void Account::setName(const char* name) {
    strcpy_s(this->name, MAX, name);
}
void Account::inMoney(int val) {
    this->balance = this->balance + val;
    cout << val <<" 입금 후 현재 잔액은 " << this->balance << "입니다." << endl;
}
void Account::outMoney(int val) {
    this->balance = this->balance - val;
    cout << val <<" 출금 후 현재 잔액은 " << this->balance << "입니다." << endl;
}

int main() {
    Account a0;
    Account a1(202235201, 0, "Kang");
    Account a2(a1);
    a0.setId(199735201);
    a0.setBalance(100000);
    a0.setName("Min");
    cout << "a0.getId:" << a0.getId() << " a0.getBalance:" << a0.getBalance() << " a0.getName:" << a0.getName() << endl;
    a1.inMoney(500);
    a1.outMoney(450);
}