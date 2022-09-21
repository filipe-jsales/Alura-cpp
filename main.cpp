#include <iostream>
#include <string>

#include "Conta.h"
#include "Conta.cpp"


int main()
{
    Conta conta1;
    conta1.toString();

    conta1.depositar(1000.0);
    conta1.mostrarSaldo();
    conta1.mostrarSaldo();
}