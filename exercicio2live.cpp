#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Estado
{
    private:
        

    public:
        string nome;
        string uf;
        void setUf(string uf)
        {
            this-> uf = uf;
        }
        string getUf()
        {
            return uf;
        }

};

class Cidade : public Estado {
    public:
    string city;
    string set_uf;
};

int main(void)
{
    Estado e;
    Cidade c;
    c.city  = "Ios";
    e.nome = "Ba";

    cout <<"Cidade: " <<  c.city<< endl;
    cout <<"Estado: " <<  e.nome;
 
    

}