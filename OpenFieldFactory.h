
#ifndef PRAC_3_OPENFIELDFACTORY_H
#define PRAC_3_OPENFIELDFACTORY_H

#include "LegionFactory.h"
#include "OpenFieldUnits.h"

class OpenFieldFactory : public LegionFactory {
public:
    Infantry* createInfantry() override ;

    Cavalry* createCavalry() override ;

    Artillery* createArtillery() override ;

    void deployArtillery() {
        // Specific implementation for deploying artillery in open field terrain
    }

    ~OpenFieldFactory() override {
        // Clean-up code if needed (e.g., delete dynamically allocated memory)
    }
};

#endif