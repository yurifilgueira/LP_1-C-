/*5. Escreva uma programa que lê um vetor A e um valor “x”. O algoritmo
deve informar se existe uma combinação de elementos no vetor A, cuja
a soma seja igual a “x”, ou seja, se existe imprima "Sim", caso contrário
"Não". Use a biblioteca STL para criar o vetor.
Ex.1: vetorA = {2, 8, 3, 7} e x = 5 saída “Sim”, pois 2+3=5
Ex.2: vetorA = {2, 8, 3, 7, 21} e x = 19 saída “Não”
Ex.3: vetorA = {2, 50, 8, 3, 7, 22} e x = 18 saída “Sim”, pois 8+3+7=18*/

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void compareSumToX(vector<int> &vec, int x)
{

    bool stop = false;
    for (int numb : vec)
    {
        if (numb == x)
        {
            cout << "Yes" << endl;
            stop = true;
        }
    }

    if (stop == false)
    {
        int sum = 0;
        for (int i = 0; i < vec.size(); i++)
        {
            sum += vec[i];
            if (stop == true)
            {
                break;
            }
            for (int j = 0; j < vec.size(); j++)
            {
                if (i != j)
                {
                    sum += vec[j];
                    if (sum == x)
                    {
                        cout << "Yes" << endl;
                        stop = true;
                    }
                    else
                    {
                        sum -= vec[j];
                    }
                }
            }
        }

        if (stop == false)
        {
            cout << "No" << endl;
        }
    }
}

int main()
{
    int n;
    cout << "How many elements will the vector have ?" << endl;
    cin >> n;

    cout << "Enter the vector elements: " << endl;
    vector<int> vec;
    int element;
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        vec.push_back(element);
    }

    cout << "Which x do you want to compare ?" << endl;
    int x;
    cin >> x;

    compareSumToX(vec, x);

    return 0;
}