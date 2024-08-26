

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

//Changed it to a concrete Factory.

class WoodlandFactory : public LegionFactory {
public:
   Infantry* createInfantry() override;

  Cavalry* createCavalry() override;

  Artillery* createArtillery() override;

  void deployArtillery();

  ~WoodlandFactory() override;

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