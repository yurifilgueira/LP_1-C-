/*1. Crie uma classe Funcionario que tenha os seguintes membros: nome, salário \
e departamento. Em seguida, crie um “vector” de Funcionario e
preencha-o com alguns funcionários. Depois, escreva uma função que recebe o nom\
e de um departamento e imprime os nomes de todos os funcionários que trabalham \
naquele departamento.
Por fim, escreva outra função que aumenta o salário de todos os funcionários em\
 um certo departamento em uma certa porcentagem.
*/

#include <iostream>
#include <Funcionario.h>
#include <vector>

using namespace std;

void printByDepartamento(string departamento, vector<Funcionario> &vec)
{
    for (Funcionario func : vec)
    {
        if (func.getDepartamento() == departamento)
        {
            cout << func.getNome() << endl;
        }
    }
}

void aumentaSalarioByDepartamento(string departamento, double porcentagem, vector<Funcionario> &vec)
{
    for (Funcionario &func : vec)
    {
        if (func.getDepartamento() == departamento)
        {
            func.setSalario(func.getSalario() * (1 + (porcentagem / 100)));
        }
    }
}

int main()
{

    vector<Funcionario> funcionarios;

    funcionarios.push_back(Funcionario("Ronaldo", 5600.90, "T.I"));
    funcionarios.push_back(Funcionario("Alex", 4980.50, "Finanças"));
    funcionarios.push_back(Funcionario("Cláudia", 4587.90, "Administração"));
    funcionarios.push_back(Funcionario("Maria", 5340.90, "Sáude"));
    funcionarios.push_back(Funcionario("Bob", 5450.90, "Marketing"));
    funcionarios.push_back(Funcionario("Anna", 5700.90, "T.I"));
    funcionarios.push_back(Funcionario("Júlia", 4310.50, "Finanças"));
    funcionarios.push_back(Funcionario("Zezínho", 4300.90, "Administração"));
    funcionarios.push_back(Funcionario("Cleber", 5440.90, "Sáude"));
    funcionarios.push_back(Funcionario("Jubileu", 5350.90, "Marketing"));

    for (Funcionario func : funcionarios)
    {
        cout << "Nome do funcionário: " << func.getNome() << endl;
        cout << "Salário: " << func.getSalario() << endl;
        cout << "Departamento:" << func.getDepartamento() << endl;
        cout << endl;
    }

    string dep;
    cout << "Digite um departamento para imprimir seus respectivos funcionários: ";
    getline(cin, dep);

    printByDepartamento(dep, funcionarios);

    double porcentagem;
    cout << "Digite um departamento, para aumentar o salário dos funcionários do departamento desejado: ";
    getline(cin, dep);

    cout << "Digite a porcentagem do aumento: ";
    cin >> porcentagem;
    aumentaSalarioByDepartamento(dep, porcentagem, funcionarios);

    cout << "\nFuncionários do departamento de " << dep << " e seus novos salários:\n"
         << endl;
    for (Funcionario func : funcionarios)
    {
        if (func.getDepartamento() == dep)
        {
            cout << "Nome do funcionário: " << func.getNome() << endl;
            cout << "Novo Salário: " << func.getSalario() << endl;
            cout << endl;
        }
    }

    return 0;
}