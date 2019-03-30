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


// Overload == operator to compare two Funcionario objects.
bool Funcionario::operator== (const Funcionario& func1) {
      
    if(this->nome.compare(func1.nome) == 0){
        return true;
    }
      
    return false;
}


//Constructor parameterized with admission date(dd/mm/yy), salary and name
Funcionario::Funcionario(unsigned int ano, unsigned int mes, unsigned int dia,
                            float salario, std::string nome){
  
    //Sets the admission date
    ltm->tm_year = ano;
    ltm->tm_mon = mes;
    ltm->tm_mday = dia;

    //Sets the salary
    setSalario(salario);

    //Sets the name
    setNome(nome);


};