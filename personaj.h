#ifndef PERSONAJ_H
#define PERSONAJ_H
#include<string>

using namespace std;

class personaj
{
    public:
        personaj(const string&nume, const int&hp, const int &atac);
        personaj();

    void ataca(personaj &other);
    void esteAtacat(int damage);
    bool esteInViata();

    protected:
        string nume;
        int hp;
        int atac;
};

#endif // PERSONAJ_H
