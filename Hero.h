#ifndef HERO_H
#define HERO_H

#include "personaj.h"

class Hero : public personaj
{
    public:
        Hero(const string&nume);
        void odihna();

    protected:

    private:
};

#endif // HERO_H
