
#ifndef PRAC_3_LEGIONFACTORY_H
#define PRAC_3_LEGIONFACTORY_H

#include "LegionUnit.h"
#include "RiverbankFactory.h"
#include "OpenFieldFactory.h"
#include "WoodlandFactory.h"
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"

class LegionFactory {
    protected:
    Infantry* Infantry;
    Cavalry* Cavalry;
    Artillery* Artillery;
public:
     LegionFactory() ;
    virtual Infantry* createCavalry() = 0;
    virtual Cavalry* createArtillery() = 0;
    virtual Artillery* createInfantry() = 0;
    virtual ~LegionFactory() = default;
};

#endif