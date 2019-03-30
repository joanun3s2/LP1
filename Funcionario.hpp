#include <string>
#include <ctime>

#ifndef _FUNCIONARIO_HPP_
#define _FUNCIONARIO_HPP_

class Funcionario{

  private:
    std::string nome;
    float salario;
    time_t now = time(0);
    tm *ltm = localtime(&now);

  public:
    
    //Getters and Setters
    std::string getNome();
    void setNome(std::string nome);

    float getSalario();
    void setSalario(float salario);

    //Constructor
    Funcionario(unsigned int ano, unsigned int mes, unsigned int dia);



};

#endif