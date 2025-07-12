#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"
class Student : public Person {
private:
    double gpa;
public:
    Student();
    Student(long identity, double gpa);
    Student(const Student& student);
    ~Student();
    void print() const;
};

#endif

