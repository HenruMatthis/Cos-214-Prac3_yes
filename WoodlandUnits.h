

#ifndef PRAC_3_WOODLANDUNITS_H
#define PRAC_3_WOODLANDUNITS_H
#include "LegionFactory.h"
#include "WoodlandUnits.h"

class WoodlandFactory : public LegionFactory {
public:
    LegionUnit* createInfantry() override {
        return new WoodlandInfantry();
    }

    LegionUnit* createCavalry() override {
        return new WoodlandCavalry();
    }

    LegionUnit* createArtillery() override {
        return new WoodlandArtillery();
    }

    void deployArtillery() {
        // Specific implementation for deploying artillery in woodland terrain
    }

    ~WoodlandFactory() override {
        // Clean-up code if needed (e.g., delete dynamically allocated memory)
    }
};

#endif