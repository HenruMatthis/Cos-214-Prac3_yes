

#ifndef PRAC_3_RIVERBANKFACTORY_H
#define PRAC_3_RIVERBANKFACTORY_H


#include "LegionFactory.h"
#include "RiverbankUnits.h"

class RiverbankFactory : public LegionFactory {
public:
    Infantry* createInfantry() override ;
    Cavalry* createCavalry() override ;

    Artillery* createArtillery() override ;

    void deployArtillery() {
        // Specific implementation for deploying artillery in riverbank terrain
    }

    ~RiverbankFactory() override {
        // Clean-up code if needed (e.g., delete dynamically allocated memory)
    }
};

#endif
