#ifndef PRAC_3_FORTIFICATION_H
#define PRAC_3_FORTIFICATION_H

#include "BattleStrategy.h"

class Fortification : public BattleStrategy {
public:
    void engage() override;
};

#endif