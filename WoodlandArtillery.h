
#ifndef PRAC_3_WOODLANDARTILLERY_H
#define PRAC_3_WOODLANDARTILLERY_H

#include "Artillery.h"

class WoodlandArtillery : public Artillery {
public:
    WoodlandArtillery();
    void move() override;
    void attack() override;
    void add(WoodlandArtillery*woodland);
    void remove(WoodlandArtillery*woodland);
    ~WoodlandArtillery();
};

#endif
