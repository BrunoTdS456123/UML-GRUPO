#include <iostream>
#include <string>

using namespace std;

class User{
public:
    User();
    ~User();

    void setNome(string _nome);
    void setID(string _ID);

private:
    string id;
    string nome;

};