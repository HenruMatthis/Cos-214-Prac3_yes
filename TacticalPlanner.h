
#ifndef PRAC_3_TACTICALPLANNER_H
#define PRAC_3_TACTICALPLANNER_H

#include "BattleStrategy.h"
#include "TacticalMemento.h"

class TacticalPlanner {
private:
    BattleStrategy* currentStrategy;

public:
    TacticalMemento* createMemento() {
        return new TacticalMemento(currentStrategy);
    }

    void restoreMemento(TacticalMemento* memento) {
        currentStrategy = memento->getStrategy();
    }

    void setStrategy(BattleStrategy* strategy) {
        currentStrategy = strategy;
    }

    BattleStrategy* getCurrentStrategy() {
        return currentStrategy;
    }
};

#endif