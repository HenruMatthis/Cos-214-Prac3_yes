#ifndef PRAC_3_WOODLANDINFANTRY_H
#define PRAC_3_WOODLANDINFANTRY_H

#include "Infantry.h"

class WoodlandInfantry : public Infantry {
public:
    WoodlandInfantry();
    void move() override;
    void attack() override;
    void add(WoodlandInfantry*woodland);
    void remove(WoodlandInfantry*woodland);
    ~WoodlandInfantry();
};

#endif
