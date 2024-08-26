
#ifndef PRAC_3_UNITCOMPONENT_H
#define PRAC_3_UNITCOMPONENT_H
#include <String>

class UnitComponent {
    protected:
    int health;
    int damage;
    int defence;
    std::string unitName;
public:
    UnitComponent();
    virtual void move() = 0;
    virtual void fight() = 0;
    virtual void add(UnitComponent* component) {}
    virtual void remove(UnitComponent* component) {}
    virtual ~UnitComponent() = default;
};

#endif