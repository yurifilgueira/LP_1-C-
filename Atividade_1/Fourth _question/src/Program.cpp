#include <iostream>
#include <Person.h>

using std::cout;
using std::endl;

template <typename T>
void greaterThan(T p1, T p2)
{
    if (p1 > p2)
    {
        cout << "P1 é maior que P2." << endl;
    }
    else if (p2 > p1)
    {
        cout << "P2 é maior que P1." << endl;
    }
    else
    {
        cout << "P1 é igual a P2" << endl;
    }
}

int main()
{

    Person p1 = Person("Ronaldo", 22, 1.72);
    Person p2 = Person("Maria", 23, 1.68);

    greaterThan(p1, p2);
    cout << p1;
    cout << p2;

    return 0;
}