#ifndef ZOO_H
#define ZOO_H

#include <iostream>
#include <vector>
#include <Animal.h>

using namespace std;

class Zoo
{

private:
    vector<Animal> animals;

public:
    vector<Animal> getAnimals();
    void addAnimal(Animal animal);
    void printAnimals();
    void printAnimalsBySpecies(string species);
    void removeByAge(int age);
};
#endif