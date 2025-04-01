/**
Erou
nume
hp - initial 200
atac - initial 100
Inamic -[ orc, troll, goblin , mercenar]
nume
hp
atac
In fiecare zi eroul decide cu ce inamic decide sa se intalneasca. Pt fiecare inamic eroul decide daca vrea sa lupte sau nu.
la sfarsitul fiecare zile eroul se odihneste si isi regenereaza hp-ul
*/

#include <iostream>
#include "personaj.h"
#include "Hero.h"
#include "Inamic.h"
#include <time.h>
#include "GameEngine.h"
using namespace std;

int main()
{   srand(time(0));
    GameEngine g;
    while(g.joculPoateContinua())
    {
        g.treciInZiuaUrmatoare();
    }

    return 0;
}
