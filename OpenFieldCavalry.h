
#ifndef PRAC_3_OpenFieldCAVALRY_H
#define PRAC_3_OpenFieldCAVALRY_H

#include "Cavalry.h"

class OpenFieldCavalry : public Cavalry {
public:
    OpenFieldCavalry();
    void move() override;
    void attack() override;
    void add(OpenFieldCavalry*openfield);
    void remove(OpenFieldCavalry*openfield);
    ~OpenFieldCavalry();
};

#endif
