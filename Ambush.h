#ifndef PRAC_3_AMBUSH_H
#define PRAC_3_AMBUSH_H

#include "BattleStrategy.h"

class Ambush : public BattleStrategy {
public:
    void engage() override;
};

#endif 
