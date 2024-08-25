//
// Created by henru on 2024/08/25.
//

#ifndef PRAC_3_LEGIONFACTORY_H
#define PRAC_3_LEGIONFACTORY_H

#include "LegionUnit.h"

class LegionFactory {
public:
    virtual LegionUnit* createInfantry() = 0;
    virtual LegionUnit* createCavalry() = 0;
    virtual LegionUnit* createArtillery() = 0;
    virtual ~LegionFactory() = default;
};

#endif