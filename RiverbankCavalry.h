
#ifndef PRAC_3_RIVERBANKCAVALRY_H
#define PRAC_3_RIVERBANKCAVALRY_H

#include "Cavalry.h"

class RiverbankCavalry : public Cavalry {
public:
    RiverbankCavalry();
    void move() override;
    void attack() override;
    void add(RiverbankCavalry*riverbank);
    void remove(RiverbankCavalry*riverbank);
    ~RiverbankCavalry();
};

#endif
