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

void User::setEmail(){
    std::cout<<"Digite seu email:";
    std::cin>>email;
}

void User::cadastrar(){
    setNome();
    setID();
    setEmail();
}

int User::isAdm(){
    int pass;
    cout << "Você é um administrador?" << std::endl;
    cin >> pass;

    if (pass == adm_pass){
        is_adm = 1;
        return is_adm;
    }
    else {
        is_adm = 0;
        return is_adm;
    }
}