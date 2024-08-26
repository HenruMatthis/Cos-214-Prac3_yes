
#ifndef PRAC_3_UNITCOMPONENT_H
#define PRAC_3_UNITCOMPONENT_H
#include <String>

// added attribute manPower: int
//changed move() to attack() to fix spec error

class UnitComponent {
    protected:
    int health;
    int damage;
    int defence;
    int manPower;
    std::string unitName;
public:
    UnitComponent();
    virtual void move() = 0;
    virtual void attack() = 0;
    virtual void add(UnitComponent* component) {}
    virtual void remove(UnitComponent* component) {}
    virtual ~UnitComponent() = default;
};

#endif