
#ifndef PRAC_3_RiverbankARTILLERY_H
#define PRAC_3_RiverbankARTILLERY_H

#include "Artillery.h"

class RiverbankArtillery : public Artillery {
public:
    RiverbankArtillery();
    void move() override;
    void attack() override;
    void add(RiverbankArtillery*riverbank);
    void remove(RiverbankArtillery*riverbank);
    ~RiverbankArtillery();
};

#endif
