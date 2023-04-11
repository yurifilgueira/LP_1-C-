#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <ostream>
#include <string>

using std::ostream;

using std::string;

class Person{

private:
    string name;
    int age;
    double height;

public:
    Person();
    Person(string name, int age, double height);
    string getName();
    void setName(string name);
    int getAge();
    void setAge(int age);
    double getHeight();
    void setHeight(double height);
    void printData();
    bool operator>(Person p);
    friend ostream& operator<<(ostream& os, Person p);
};

#endif