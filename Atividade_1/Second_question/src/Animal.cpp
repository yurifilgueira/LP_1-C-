#include <Animal.h>

using namespace std;

Animal::Animal()
{
}

Animal::Animal(string species, string name, int age)
{
    this->species = species;
    this->name = name;
    this->age = age;
}

string Animal::getSpecies()
{
    return this->species;
}

void Animal::setSpecies(string species)
{
    this->species = species;
}

string Animal::getName()
{
    return this->name;
}

void Animal::setName(string name)
{
    this->name = name;
}

int Animal::getAge()
{
    return this->age;
}

void Animal::setAge(int age)
{
    this->age = age;
}