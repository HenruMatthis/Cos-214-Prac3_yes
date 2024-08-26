
#ifndef PRAC_3_CAVALRY_H
#define PRAC_3_CAVALRY_H


#include "LegionUnit.h"

class Cavalry : public LegionUnit {
public:
Cavalry();
    virtual void move() override ;
    virtual void attack() override ;
    virtual void add(Cavalry* cavalry) = 0;//Made this an abstract class
    virtual void remove(Cavalry* cavalry) ;
    ~Cavalry();
};

#endif