//Caretaker


#ifndef PRAC_3_ARTILLERY_H
#define PRAC_3_ARTILLERY_H
#include "UnitComponent.h"

class Artillery : public UnitComponent {
public:
    void move() override {
        // Artillery-specific move implementation
    }

    void fight() override {
        // Artillery-specific fight implementation
    }

};

#endif