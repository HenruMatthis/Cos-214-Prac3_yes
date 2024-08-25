

#ifndef PRAC_3_LEGION_H
#define PRAC_3_LEGION_H


#include <vector>
#include "UnitComponent.h"

class Legion : public UnitComponent {
private:
    std::vector<UnitComponent*> units;

public:
    void add(UnitComponent* component) override {
        units.push_back(component);
    }

    void remove(UnitComponent* component) override {
        units.erase(std::remove(units.begin(), units.end(), component), units.end());
    }

    void move() override {
        for (auto& unit : units) {
            unit->move();
        }
    }

    void fight() override {
        for (auto& unit : units) {
            unit->fight();
        }
    }

    ~Legion() {
        for (auto& unit : units) {
            delete unit;
        }
    }
};

#endif
