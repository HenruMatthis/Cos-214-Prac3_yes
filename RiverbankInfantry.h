
#ifndef PRAC_3_RIVERBANKUNITS_H
#define PRAC_3_RIVERBANKUNITS_H



#include "Infantry.h"

class RiverbankInfantry : public Infantry {
public:
    RiverbankInfantry();
    void move() override;
    void attack() override;
    void add(RiverbankInfantry*riverbank);
    void remove(RiverbankInfantry*riverbank);
    ~RiverbankInfantry();
};

#endif
