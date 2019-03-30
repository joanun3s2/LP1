#include "Empresa.hpp"

//Getters and Setters
std::string Empresa::getNome(){

  return nome;

}
void Empresa::setNome(std::string nomeEmpresa){

  nome = nomeEmpresa;

}

long Empresa::getCNPJ(){

  return CNPJ;

}
void Empresa::setCNPJ(long cnpj){

  CNPJ = cnpj;

}

//Insert setter and getter for funcionario*


//Constructor
Empresa::Empresa(std::string nome, long cnpj){

  this->nome = nome;
  CNPJ = cnpj;

};