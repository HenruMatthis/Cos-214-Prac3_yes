
#ifndef PRAC_3_BATTLESTRATEGY_H
#define PRAC_3_BATTLESTRATEGY_H



class BattleStrategy {
public:
    virtual void engage() = 0;
    virtual ~BattleStrategy() = default;
};

#endif