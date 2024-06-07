#include "user.hpp"
#include <iostream>
#include <string>

void User::setNome(){
    std::cout<<"Digite seu nome:";
    std::cin>>nome;
}

void User::setID(){
    std::cout<<"Digite sua senha:";
    std::cin>>senha;
}   

void setEmail(){
    std::cout<<"Digite seu email:";
    std::cin>>email;
}

void cadastrar(){
    setNome();
    setID();
    setEmail();
}
void excluirCadastro(){
    nome=nullptr
}
