#include <iostream>
#include <string>
#include "emprestimo.hpp"

using namespace std;


Emprestimo::Emprestimo(){};
Emprestimo::~Emprestimo(){};

void Emprestimo::SetLocacao(std::string dataLoc_) {
   data_loc = dataLoc_ ;
}
void Emprestimo::SetDevolucao(string data_dev_) {
   data_dev = data_dev_ ;
}
float Emprestimo::Registro(){
   std::cout << "insira o número do livro que deseja locar:" ;
   std::cin << IDlivro ;
   std::cout  << "insira o dia da locação:" ;
   std::cin << data_loc ;
   DATAdev(data_loc);
}
void Emprestimo::DATAdev(){
   std::cout << "a data de devolução do livro é:" << data_dev ;
}
