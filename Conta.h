#ifndef CONTA_H
#define CONTA_H
#include <string>
#include <iostream>
#include <string.h>
using std::cout;
using std::string;

class Conta
{
public:
    //constructors & destructors
    Conta();
    ~Conta();
    Conta(string , string , string );
    
    //public methods
    float getSaldo();
    void setSaldo(float );
    string getNumero();
    void setNumero(string );
    string getCpfTitular();
    void setCpfTitular(string);
    void sacar( float );
    void depositar(float );
    void toString();
    void validarNome();

private:
	float saldo = 0.0;   
    string numero ;
    string nomeTitular;
	string cpfTitular ;
    static int numeroDeContas;
    

};

#endif; //CONTA_H