
#ifndef PRAC_3_TACTICALMEMENTO_H
#define PRAC_3_TACTICALMEMENTO_H

#include "BattleStrategy.h"

class TacticalMemento {
private:
    BattleStrategy* storedStrategy;

public:
    TacticalMemento(BattleStrategy* strategy) : storedStrategy(strategy) {}

    BattleStrategy* getStrategy() {
        return storedStrategy;
    }
};

#endif