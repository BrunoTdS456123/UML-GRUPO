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