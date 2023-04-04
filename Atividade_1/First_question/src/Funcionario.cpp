#include <Funcionario.h>
#include <string>

using namespace std;

Funcionario(){
    this.salario = 0;
}

Funcionario(string nome, double salario, string departamento){
    this->nome = nome;
    this->salario = salario;
    this->departamento = departamento;
}

string Funcionario::getNome()
{
    return this->nome;
}

void Funcionario::setNome(string nome)
{
    this->nome = nome;
}

double Funcionario::getSalario()
{
    return this->salario;
}

void Funcionario::setSalario(double salario)
{
    this->salario = salario;
}

string Funcionario::getDepartamento()
{
    return this->departamento;
}

void Funcionario::setDepartamento(string departamento)
{
    this->departamento = departamento;
}