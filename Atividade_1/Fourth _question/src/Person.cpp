#include <Person.h>
#include <ostream>    
    
using std::cout;
using std::endl;
using std::ostream;

Person::Person(){
}

Person::Person(string name, int age, double height){
    this->name= name;
    this->age = age;
    this->height = height;
}

string Person::getName(){
    return this->name;
}

void Person::setName(string name){
    this->name = name;
}

int Person::getAge(){
    return this->age;
}

void Person::setAge(int age){
    this->age = age;
}

double Person::getHeight(){
    return this->height;
}

void Person::setHeight(double height){
    this->height = height;
}

bool Person::operator> (Person p){
    if  (this->age > p.getAge()){
        return true;
    }
    else {
        return false;
    }
}

ostream& operator<<(ostream& os, Person p){

    os << "Name: " << p.getName()  << "\nAge: " << p.getAge() << "\nHeight: " << p.getHeight() << endl;

    return os;
}