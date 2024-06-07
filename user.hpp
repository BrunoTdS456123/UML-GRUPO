#include <iostream>
#include <string>

using namespace std;

class User{
public:
    User();
    ~User();

    void setNome();
    void setID();
    void setEmail();
    void cadastrar();
private:
    int isAdm;
    string id;
    string nome;
    string email;
    string senha;
};