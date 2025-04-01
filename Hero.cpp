#include "Hero.h"
#include<iostream>

using namespace std;


Hero::Hero(const string&nume) :personaj(nume,200,100)
{
    cout<<" Eu sunt "<< nume<<endl;
}
void Hero::odihna()
{   if(esteInViata())
{


    hp=200;
    atac=atac*1.1;
    cout<< " eroul s-a odhinit "<<endl;
}
}
