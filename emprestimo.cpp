
#include "emprestimo.hpp"
#include <iostream>

std::string dataLoc ;
std::string dataDev ; 


emprestimo::emprestimo(){};
emprestimo::~emprestimo(){};

void emprestimo::SetLocacao(std::string dataLoc_) {
   dataLoc = dataLoc_ ;
}
void emprestimo::SetDevolucao(std::string dataDev_) {
   dataDev = dataDev_ ;
}