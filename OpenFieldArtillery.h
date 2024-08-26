
#ifndef PRAC_3_OPENFIELDARTILLERY_H
#define PRAC_3_OPENFIELDARTILLERY_H

#include "Artillery.h"

class OpenFieldArtillery : public Artillery {
public:
    OpenFieldArtillery();
    void move() override;
    void attack() override;
    void add(OpenFieldArtillery*openfield);
    void remove(OpenFieldArtillery*openfield);
    ~OpenFieldArtillery();
};

#endif
