
#ifndef PRAC_3_CAVALRY_H
#define PRAC_3_CAVALRY_H

#include "UnitComponent.h"

class Cavalry : public UnitComponent {
public:
    void move() override {
        // Cavalry-specific move implementation
    }

    void fight() override {
        // Cavalry-specific fight implementation
    }
};

#endif