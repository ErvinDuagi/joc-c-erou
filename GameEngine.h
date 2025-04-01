#ifndef GAMEENGINE_H
#define GAMEENGINE_H
#include "Hero.h"
#include "Inamic.h"

class GameEngine
{
    public:
        GameEngine();
        virtual ~GameEngine();
        bool joculPoateContinua();
        void treciInZiuaUrmatoare();
        void intalnire(Inamic *i);
        void luptaPanalaMoarte(Inamic *i);

    protected:

    private:
        Hero* e;
        Inamic**inamici;
        int nrInamici;
};

#endif // GAMEENGINE_H
