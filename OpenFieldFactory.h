
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
};

#endif