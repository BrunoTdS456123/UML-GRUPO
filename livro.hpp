#include <iostream>
#include <string>

using namespace std;

class Livro{
    public:
    Livro();
    ~Livro();

    void VerificarNumeroExemplares(int exemplarN);

    private:
        string titulo ;
        string autor ; 
        string editora ; 
        int id ;
        string dataLaunch ;
        int exemplarN ; 
        int situacao;
};