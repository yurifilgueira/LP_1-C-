/*2. Crie uma classe Animal que tenha os seguintes membros: nome, espécie e idade.
Em seguida, crie uma classe Zoo que tenha um “vector” de Animal,e adicione alguns animais ao “vector”.
Em seguida, escreva uma função que recebe o nome de uma espécie e imprime os dados de todos os animais
daquela espécie no “vector”. além disso, escreva outra função que remove todos os animais com mais de uma certa idade do “vector”.*/

#include <iostream>
#include <Animal.h>
#include <Zoo.h>

int main()
{

    Zoo zoo;

    zoo.addAnimal(Animal("Lion", "Simba", 3));
    zoo.addAnimal(Animal("Tiger", "Sher Khan", 5));
    zoo.addAnimal(Animal("Bear", "Baloo", 4));
    zoo.addAnimal(Animal("Elephant", "Dumbo", 1));
    zoo.addAnimal(Animal("Giraffe", "Melman", 6));
    zoo.addAnimal(Animal("Monkey", "King Kong", 2));
    zoo.addAnimal(Animal("Hippopotamus", "Hippo", 7));
    zoo.addAnimal(Animal("Kangaroo", "Joey", 2));
    zoo.addAnimal(Animal("Zebra", "Marty", 4));
    zoo.addAnimal(Animal("Penguin", "Skipper", 3));
    zoo.addAnimal(Animal("Lion", "Scanor", 3));
    zoo.addAnimal(Animal("Giraffe", "Ellie", 6));
    zoo.addAnimal(Animal("Zebra", "John", 4));
    zoo.addAnimal(Animal("Tiger", "Tigress", 5));
    zoo.addAnimal(Animal("Monkey", "Zeck", 2));
    zoo.addAnimal(Animal("Hippopotamus", "Bob", 7));

    cout << "-----All animals-----" << endl;
    zoo.printAnimals();

    cout << "-----Data for a specified species-----" << endl;
    zoo.printAnimalsBySpecies("Zebra");

    cout << "-----Removing animals with more than one specified age-----" << endl;
    zoo.removeByAge(4);

    cout << "-----New vector of animals-----" << endl;
    zoo.printAnimals();

    return 0;
}