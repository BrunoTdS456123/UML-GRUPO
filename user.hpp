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
    int isAdm();

private:
    int is_adm;
    int adm_pass = 123;
    string id;
    string nome;
    string email;
    string senha;
};