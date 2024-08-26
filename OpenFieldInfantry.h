
#ifndef PRAC_3_OPENFIELDUNITS_H
#define PRAC_3_OPENFIELDUNITS_H


#include "Infantry.h"

class OpenFieldInfantry : public Infantry {
public:
    OpenFieldInfantry();
    void move() override;
    void attack() override;
    void add(OpenFieldInfantry*openfield);
    void remove(OpenFieldInfantry*openfield);
    ~OpenFieldInfantry();
};

#endif
