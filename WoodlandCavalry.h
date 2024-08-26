
#ifndef PRAC_3_WOODLANDUNITS_H
#define PRAC_3_WOODLANDUNITS_H

#include "Cavalry.h"

class WoodlandCavalry : public Cavalry {
public:
    WoodlandCavalry();
    void move() override;
    void attack() override;
    void add(WoodlandCavalry*woodland);
    void remove(WoodlandCavalry*woodland);
    ~WoodlandCavalry();
};

#endif
