#include "Empresa.hpp"

//Getters and Setters
std::string getNome(){

  return nome;

}
void setNome(std::string nome){

  this.nome = nome;

}

long getCNPJ(){

  return CNPJ;

}
void setCNPJ(long cnpj){

  CNPJ = cnpj;

}

//Insert setter and getter for funcionario*


//Constructor
Empresa(std::string nome, long cnpj){

  this->nome = nome;
  CNPJ = cnpj;

};