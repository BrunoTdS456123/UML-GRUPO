#include<iostream>
#include <string>
#include "user.hpp"
#include "emprestimo.hpp"
#include "livro.hpp"
#include <vector>


using namespace std;

void inicializarLivros(std::vector<Livro*>& livros){
    for (int i = 0; i < 10; i++) {
        Livro* livro = new Livro();
        livro->setTitulo("Livro " + std::to_string(i+1));
        livro->setAutor("Autor " + std::to_string(i+1));
        livro->setAno(2000 + i+1);
        livro->setEditora("Editora " + std::to_string(i+1));
        livro->setId(i);
        livros.push_back(livro);
    }
}

int main(){
    std::vector<Livro*> livros;
    
    inicializarLivros(livros);

    //int is_adm;
    //User onielson;
    //onielson.cadastrar();
    //onielson.isAdm();
    return 0;
}