/*1. Crie uma classe Funcionario que tenha os seguintes membros: nome, salário e departamento. Em seguida, crie um “vector” de Funcionario e
preencha-o com alguns funcionários. Depois, escreva uma função que recebe o nome de um departamento e imprime os nomes de todos os funcionários que trabalham naquele departamento.
Por fim, escreva outra função que aumenta o salário de todos os funcionários em um certo departamento em uma certa porcentagem.
*/

#include <iostream>
#include <Funcionario.h>
#include <vector>

using namespace std;

int main()
{

    vector<Funcionario> funcionarios;

    funcionarios.push_back(Funcionario("Ronaldo", 5500.00, "T.I"));

    for (Funcionario func : funcionarios)
    {
        cout << func.getNome() << func.getSalario() << func.getDepartamento();
    }

    return 0;
}