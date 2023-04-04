#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

using namespace std;

class Funcionario
{

private:
    string nome;
    double salario;
    string departamento;

public:
    Funcionario();
    Funcionario(string nome, double salario, string departamento);
    string getNome();
    void setNome(string nome);
    double getSalario();
    void setSalario(double salario);
    string getDepartamento();
    void setDepartamento(string departamento);
};
#endif