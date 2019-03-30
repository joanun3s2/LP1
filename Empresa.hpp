#include "Funcionario.hpp"

#include <string>

#ifndef _EMPRESA_HPP_
#define _EMPRESA_HPP_

class Empresa{

  private:
    std::string nome;
    long CNPJ;
    //It does need to be an dynamic vector
    Funcionario** funcionarios;

  public:
    
    //Getters and Setters
    std::string getNome();
    void setNome(std::string nome);

    long getCNPJ();
    void setCNPJ(long cnpj);

    //Insert setter and getter for funcionario*


    //Constructor
    Empresa(std::string nome, long cnpj);


};

#endif