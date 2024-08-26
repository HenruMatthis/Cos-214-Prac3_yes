

#ifndef PRAC_3_WOODLANDFACTORY_H
#define PRAC_3_WOODLANDFACTORY_H
#include "LegionFactory.h"
#include "WoodlandUnits.h"

#include "LegionUnit.h"
#include "RiverbankFactory.h"
#include "OpenFieldFactory.h"
#include "WoodlandFactory.h"
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"

class WoodlandFactory : public LegionFactory {
public:
   virtual Infantry* createInfantry() override ;

  virtual  Cavalry* createCavalry() override ;

  virtual  Artillery* createArtillery() override ;
    virtual ~WoodlandFactory() = default;
};

#endif

// #ifndef PRAC_3_LEGIONFACTORY_H
// #define PRAC_3_LEGIONFACTORY_H

// #include "LegionUnit.h"
// #include "RiverbankFactory.h"
// #include "OpenFieldFactory.h"
// #include "WoodlandFactory.h"
// #include "Infantry.h"
// #include "Cavalry.h"
// #include "Artillery.h"

// class LegionFactory {
// public:
//      LegionFactory() ;
//     virtual Infantry* createCavalry() = 0;
//     virtual Cavalry* createArtillery() = 0;
//     virtual Artillery* createInfantry() = 0;
//     virtual ~LegionFactory() = default;
// };

// #endif