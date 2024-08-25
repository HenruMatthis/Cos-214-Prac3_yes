
#ifndef PRAC_3_LEGIONFACTORY_H
#define PRAC_3_LEGIONFACTORY_H

#include "LegionUnit.h"
#include "RiverbankFactory.h"
#include "OpenFieldFactory.h"
#include "WoodlandFactory.h"

class LegionFactory {
public:
    virtual LegionFactory() default;
    virtual Infantry* createCavalry() = 0;
    virtual Calvary* createArtillery() = 0;
    virtual Artillery* createInfantry() = 0;
    virtual ~LegionFactory() = default;
};

#endif