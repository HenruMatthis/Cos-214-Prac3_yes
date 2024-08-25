

#ifndef PRAC_3_RIVERBANKFACTORY_H
#define PRAC_3_RIVERBANKFACTORY_H

#include "LegionFactory.h"
#include "RiverbankUnits.h"

class RiverbankFactory : public LegionFactory {
public:
    LegionUnit* createInfantry() override {
        return new RiverbankInfantry();
    }

    LegionUnit* createCavalry() override {
        return new RiverbankCavalry();
    }

    LegionUnit* createArtillery() override {
        return new RiverbankArtillery();
    }
};

#endif