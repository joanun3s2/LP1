#include "Funcionario.hpp"

#include <vector>

//Getters and Setters
std::string Funcionario::getNome(){

  return nome;

}
void Funcionario::setNome(std::string nome){

  this->nome = nome;

}

float Funcionario::getSalario(){

  return salario;

}
void Funcionario::setSalario(float salario){

  this->salario = salario;
  
}

//Constructor
Funcionario::Funcionario(unsigned int ano, unsigned int mes, unsigned int dia){

  ltm->tm_year = ano;
  ltm->tm_mon = mes;
  ltm->tm_mday = dia;

};