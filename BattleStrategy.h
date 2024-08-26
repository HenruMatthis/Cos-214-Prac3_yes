
#ifndef PRAC_3_BATTLESTRATEGY_H
#define PRAC_3_BATTLESTRATEGY_H

//Changed this to concrete class with virtual method

class BattleStrategy {
public:
    virtual void engage() ;
    virtual ~BattleStrategy() = default;
};

#endif