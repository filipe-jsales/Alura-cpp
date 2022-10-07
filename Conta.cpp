#include <iostream>
#include "Conta.h"
#include <string>
#include <string.h>
#include <iostream>
using std::cout;
using std::string;

Conta::Conta( )
:numero("0"), nomeTitular("sem nome"), cpfTitular("sem cpf"), saldo(0.0)
{
    numeroDeContas++;
}

Conta::Conta(string numero, string nomeTitular, string cpfTitular)
: saldo(0.0), nomeTitular(nomeTitular), cpfTitular(cpfTitular)
{

    numeroDeContas++;
}

Conta::~Conta()
{
    //destructor
    numeroDeContas--;
}

float Conta::getSaldo()
{
    return this->saldo;
}

void Conta::setSaldo(float saldo)
{
    this->saldo = saldo;
}

string Conta::getNumero()
{
    return this->numero;
}

void Conta::setNumero(string numero)
{
    this->numero = numero;
}

string Conta::getCpfTitular()
{
    return this->cpfTitular;
}

void Conta::setCpfTitular(string cpfTitular)
{
    this->cpfTitular = cpfTitular;
}

void Conta::sacar(float valorASacar)
{
    this->saldo -= valorASacar;
}
void Conta::depositar(float valorADepositar)
{
    this->saldo+=valorADepositar;
}

void Conta::toString()
{
    cout << "Saldo: " << this->saldo << "\n";
    cout << "cpfTitular: " << this->cpfTitular<< "\n";
    cout << "nomeTitular: " << this->nomeTitular<< "\n";
    cout << "numero: " << this->numero<< "\n";
}

void Conta::validarNome()
{
    if (this->nomeTitular.size() < 5)
    {
        cout << "Nome muito curto\n";
        exit(-1);
    }
}