#include <iostream>
#include <string>

using namespace std;

class Livro{
    public:
    Livro();
    ~Livro();
    std::vector<Livro> livros;

    void VerificarNumeroExemplares(int exemplarN);

    private:
        string titulo;
        string autor; 
        string editora; 
        int id;
        string dataLaunch;
        int exemplar_n; 
        int situacao;
};