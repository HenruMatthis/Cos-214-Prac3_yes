
#ifndef PRAC_3_TACTICALCOMMAND_H
#define PRAC_3_TACTICALCOMMAND_H

#include "BattleStrategy.h"

class TacticalCommand {
private:
    BattleStrategy* strategy;

public:
    void setStrategy(BattleStrategy* s) {
        strategy = s;
    }

    void executeStrategy() {
        if (strategy) {
            strategy->engage();
        }
    }

    void chooseBestStrategy(); // Implementation depends on Memento pattern
};

#endif