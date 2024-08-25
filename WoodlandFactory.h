

#ifndef PRAC_3_WOODLANDFACTORY_H
#define PRAC_3_WOODLANDFACTORY_H
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
};

#endif