

#ifndef PRAC_3_WOODLANDUNITS_H
#define PRAC_3_WOODLANDUNITS_H

#include "LegionUnit.h"

class WoodlandInfantry : public LegionUnit {
public:
    void move() override {
        // Implementation specific to Woodland Infantry
    }

    void attack() override {
        // Implementation specific to Woodland Infantry
    }
};

class WoodlandCavalry : public LegionUnit {
public:
    void move() override {
        // Implementation specific to Woodland Cavalry
    }

    void attack() override {
        // Implementation specific to Woodland Cavalry
    }
};

class WoodlandArtillery : public LegionUnit {
public:
    void move() override {
        // Implementation specific to Woodland Artillery
    }

    void attack() override {
        // Implementation specific to Woodland Artillery
    }
};

#endif
