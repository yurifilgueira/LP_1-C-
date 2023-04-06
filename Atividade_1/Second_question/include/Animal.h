#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class Animal
{

private:
    string species;
    string name;
    int age;

public:
    Animal();
    Animal(string species, string name, int age);
    string getSpecies();
    void setSpecies(string species);
    string getName();
    void setName(string name);
    int getAge();
    void setAge(int age);
};
#endif