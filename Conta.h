#ifndef CONTA_H
#define CONTA_H
#include <string>

class Conta
{
public:
    //constructors & destructors
    Conta();
    ~Conta();
    
    //public methods
    void sacar( float valorASacar);
    void depositar(float valorADepositar);
    void mostrarSaldo();
    void toString();

private:
	float saldo;   
    std::string numero;
    std::string nomeTitular;
	std::string cpfTitular;


};

#endif; //CONTA_H