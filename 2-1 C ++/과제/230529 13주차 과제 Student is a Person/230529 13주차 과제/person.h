#ifndef PERSON_H
#define PERSON_H

class Person {
protected:
    long identity;
public:
    Person();
    Person(long identity);
    Person(const Person& person);
    ~Person();
    void print() const;
};

#endif
