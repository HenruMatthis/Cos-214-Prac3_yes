
#ifndef PRAC_3_OPENFIELDFACTORY_H
#define PRAC_3_OPENFIELDFACTORY_H

#include "LegionFactory.h"
#include "OpenFieldUnits.h"

class OpenFieldFactory : public LegionFactory {
public:
    LegionUnit* createInfantry() override {
        return new OpenFieldInfantry();
    }

    LegionUnit* createCavalry() override {
        return new OpenFieldCavalry();
    }

    LegionUnit* createArtillery() override {
        return new OpenFieldArtillery();
    }

    void deployArtillery() {
        // Specific implementation for deploying artillery in open field terrain
    }

    ~OpenFieldFactory() override {
        // Clean-up code if needed (e.g., delete dynamically allocated memory)
    }
};

#endif