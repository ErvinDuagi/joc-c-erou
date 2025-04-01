#include "GameEngine.h"
#include <iostream>
using namespace std;
GameEngine::GameEngine()
{
    string numeErou;
    cout<<"care este numele eroului  ";
    cin>>numeErou;
    e = new Hero(numeErou);
    inamici=NULL;
    nrInamici=0;

}

GameEngine::~GameEngine()
{
    delete e;
    if(inamici)
    {
        for(int i=0;i<nrInamici;i++)
          {

            delete inamici[i];
          }
          delete [] inamici;

    }
}
bool GameEngine::joculPoateContinua()
{
    return e->esteInViata();
}
void GameEngine::treciInZiuaUrmatoare()
{
    cout<<"cati inamici vrei sa intalnesti "<< endl;
    cin>>nrInamici;
    inamici=new Inamic*[nrInamici];
    for(int i=0;i<nrInamici;i++)
    {
        inamici[i]=new Inamic;
    }
    cout<< "am generat " <<nrInamici<< " inamici"<<endl;
    for(int i=0;i<nrInamici;i++)
    {
        intalnire(inamici[i]);
    }
    e->odihna();

}
void GameEngine::intalnire(Inamic*i)
{
    i->prezentare();
    cout<< " Vrei sa lupti ? Y/N  ";
        char op;
        cin>>op;
        if(op=='Y')
        {
            luptaPanalaMoarte(i);
        }
}
void GameEngine::luptaPanalaMoarte(Inamic*i)
{
    while(i->esteInViata()&&e->esteInViata())
    {
        e->ataca(*i);
        i->ataca(*e);
    }
}
