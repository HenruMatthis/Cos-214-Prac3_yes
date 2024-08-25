
#ifndef PRAC_3_INFANTRY_H
#define PRAC_3_INFANTRY_H

#include "UnitComponent.h"

class Infantry : public UnitComponent {
public:
    void move() override {
        // Infantry-specific move implementation
    }

    void fight() override {
        // Infantry-specific fight implementation
    }
};

#endif