#include "personaj.h"
#include <iostream>
using namespace std;

personaj::personaj(const string&nume, const int &hp, const int&atac) :
    nume(nume), hp(hp) , atac(atac)

{

}
personaj::personaj () { }

void personaj::ataca(personaj& other)
{   if(esteInViata())
{
    cout<<nume<<" ataca "<<other.nume<<endl;
    other.esteAtacat(atac);
 }
}
void personaj::esteAtacat(int damage)
{   cout<<nume<<" primeste "<< damage<<"damage"<<endl;
    hp -= damage;
    cout<<"hp ramas"<<hp<<endl;
}
bool personaj::esteInViata(){
return hp>0;
}
