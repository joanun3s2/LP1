#include "Funcionario.hpp"
#include "Empresa.hpp"

#include <iostream>
#include <vector>

#ifndef _EXECUCAO_HPP_
#define _EXECUCAO_HPP_

class Execucao{

  private:
    Funcionario* funcionarios;
    Empresa* empresa;
    
  public:
    void AddFuncionarios();
    std::string nomeFuncionario;
    std::string nomeEmpresa;


};

#endif