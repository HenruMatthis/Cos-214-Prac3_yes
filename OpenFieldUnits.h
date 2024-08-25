
#ifndef PRAC_3_OPENFIELDUNITS_H
#define PRAC_3_OPENFIELDUNITS_H

#include "LegionUnit.h"

class OpenFieldInfantry : public LegionUnit {
public:
    void move() override {
        // Implementation specific to Open Field Infantry
    }

    void attack() override {
        // Implementation specific to Open Field Infantry
    }
};

class OpenFieldCavalry : public LegionUnit {
public:
    void move() override {
        // Implementation specific to Open Field Cavalry
    }

    void attack() override {
        // Implementation specific to Open Field Cavalry
    }
};

class OpenFieldArtillery : public LegionUnit {
public:
    void move() override {
        // Implementation specific to Open Field Artillery
    }

    void attack() override {
        // Implementation specific to Open Field Artillery
    }
};

#endif