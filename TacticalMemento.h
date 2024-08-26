
#ifndef PRAC_3_TACTICALMEMENTO_H
#define PRAC_3_TACTICALMEMENTO_H

#include "BattleStrategy.h"
//Updated

class TacticalMemento {
private:
    BattleStrategy* currentStrategy;

public:
    void storeStrategy (BattleStrategy* strategy);
    BattleStrategy* getStrategy() {
        return currentStrategy;
    }
};

#endif