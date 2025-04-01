#include "Inamic.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Inamic::Inamic()
{
    const string optiuniNume[] ={"orc","trol","goblin","mercenar"};
     nume = optiuniNume [rand()%4] ;
    hp = rand()%200 + 100;
    atac = rand()%100 + 50 ;
}
void Inamic::prezentare()
{
    cout<< nume << " Hp : "<< hp << " Atac : "<< atac;
}
