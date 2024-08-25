
#ifndef PRAC_3_UNITCOMPONENT_H
#define PRAC_3_UNITCOMPONENT_H


class UnitComponent {
public:
    virtual void move() = 0;
    virtual void fight() = 0;
    virtual void add(UnitComponent* component) {}
    virtual void remove(UnitComponent* component) {}
    virtual ~UnitComponent() = default;
};

#endif