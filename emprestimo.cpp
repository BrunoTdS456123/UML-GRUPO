
#include "emprestimo.hpp"
#include <iostream>

std::string dataLoc ;
std::string dataDev ; 


emprestimo::emprestimo(){};
emprestimo::~emprestimo(){};

void emprestimo::VerificarNumeroExemplares(int exemplarN) {
    if(exemplarN==0){
        situacao= 0; //  livro nao pode ser emprestado
        return situacao;
    }else{
        situacao= 1; // livro pode ser emprestado
        return situacao;
    }
}