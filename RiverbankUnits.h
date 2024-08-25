//
// Created by henru on 2024/08/25.
//

#ifndef PRAC_3_RIVERBANKUNITS_H
#define PRAC_3_RIVERBANKUNITS_H



#include "LegionUnit.h"

class RiverbankInfantry : public LegionUnit {
public:
    void move() override {
        // Implementation specific to Riverbank Infantry
    }

    void attack() override {
        // Implementation specific to Riverbank Infantry
    }
};

class RiverbankCavalry : public LegionUnit {
public:
    void move() override {
        // Implementation specific to Riverbank Cavalry
    }

    void attack() override {
        // Implementation specific to Riverbank Cavalry
    }
};

class RiverbankArtillery : public LegionUnit {
public:
    void move() override {
        // Implementation specific to Riverbank Artillery
    }

    void attack() override {
        // Implementation specific to Riverbank Artillery
    }
};

#endif