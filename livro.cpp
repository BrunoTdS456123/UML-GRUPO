#include "livro.hpp"
#include <iostream>
#include <string>

Livro::Livro(){};

Livro::~Livro(){};

void Livro::VerificarNumeroExemplares(int exemplarN) {
    if(exemplarN==0){
        situacao= 0; //  livro nao pode ser emprestado
    }else{
        situacao= 1; // livro pode ser emprestado
    }
}