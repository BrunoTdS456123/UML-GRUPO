#include <iostream>
#include <string>

using namespace std;

class Emprestimo{
    public:
    Emprestimo();
    ~Emprestimo();

    void SetLocacao(string dataLoc_);
    void SetDevolucao(string dataDev_);
    float Registro();
    void DATAdev();

    private:
        string data_loc;
        string data_dev; 
        string id_livro;
        
};