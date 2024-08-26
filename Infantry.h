
#ifndef PRAC_3_INFANTRY_H
#define PRAC_3_INFANTRY_H

#include "LegionUnit.h"

class Infantry : public LegionUnit {
public:
Infantry();
    virtual void move() override ;
    virtual void attack() override ;
    virtual void add(Infantry* infantry) ;
    virtual void remove(Infantry* infantry) ;
    ~Infantry();
};

#endif