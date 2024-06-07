
#include "livro.hpp"
#include <iostream>

std::string titulo ;
std::string autor ; 
std::string editora ; 
int id ;
std::string dataLaunch ;
int exemplarN ; 

livro::livro(){};
livro::~livro(){};

void livro::VerificarNumeroExemplares() {
    if(exemplarN==0){
        situacao= 0; //  livro nao pode ser emprestado
        return situacao;
    }else{
        situacao= 1; // livro pode ser emprestado
        return situacao;
    }
}