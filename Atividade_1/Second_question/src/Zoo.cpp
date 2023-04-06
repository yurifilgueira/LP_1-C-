#include <Animal.h>
#include <Zoo.h>
#include <string>

using namespace std;

vector<Animal> Zoo::getAnimals()
{
    return this->animals;
}

void Zoo::addAnimal(Animal animal)
{
    animals.push_back(animal);
}

void Zoo::printAnimals()
{
    for (Animal a : animals)
    {
        cout << "Species: " << a.getSpecies() << endl;
        cout << "Name: " << a.getName() << endl;
        cout << "Age: " << a.getAge() << endl;
        cout << endl;
    }
}

void Zoo::printAnimalsBySpecies(string species)
{
    for (Animal a : animals)
    {
        if (a.getSpecies() == species)
        {
            cout << "Species: " << a.getSpecies() << endl;
            cout << "Name: " << a.getName() << endl;
            cout << "Age: " << a.getAge() << endl;
            cout << endl;
        }
    }
}

void Zoo::removeByAge(int age)
{
    vector<Animal>::iterator it = animals.begin();

    while (it != animals.end())
    {
        if (it->getAge() > age)
        {
            it = animals.erase(it);
        }
        else
        {
            it++;
        }
    }
}