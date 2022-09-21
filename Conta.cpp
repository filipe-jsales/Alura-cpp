#include <iostream>
#include "Conta.h"
#include <string>

Conta::Conta()
{
    saldo = 0.0;
    this->numero = "1";
    this->cpfTitular = "11111111111";
    this->nomeTitular = "Sem nome";
}

Conta::~Conta()
{
    //destructor
}

void Conta::sacar(float valorASacar)
{
    this->saldo -= valorASacar;
}
void Conta::depositar(float valorADepositar)
{
    this->saldo+=valorADepositar;
}

void Conta::mostrarSaldo() 
{
    std::cout << "\nSaldo: " << this->saldo;
}

void Conta::toString()
{
    std::cout << "Saldo: " << this->saldo << "\n";
    std::cout << "cpfTitular: " << this->cpfTitular<< "\n";
    std::cout << "nomeTitular: " << this->nomeTitular<< "\n";
    std::cout << "numero: " << this->numero<< "\n";
}