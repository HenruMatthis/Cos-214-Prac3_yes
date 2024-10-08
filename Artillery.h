

#ifndef PRAC_3_ARTILLERY_H
#define PRAC_3_ARTILLERY_H

#include "LegionUnit.h"

class Artillery : public LegionUnit {
public:
Artillery();
    virtual void move() override ;
    virtual void attack() override ;
    virtual void add(Artillery* artillery) ;
    virtual void remove(Artillery* artillery) ;
    ~Artillery();
};

#endif