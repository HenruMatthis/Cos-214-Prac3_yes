
#ifndef PRAC_3_LEGIONUNIT_H
#define PRAC_3_LEGIONUNIT_H



class LegionUnit {
public:
    virtual void move() = 0;
    virtual void attack() = 0;
    virtual ~LegionUnit() = default;
};

#endif
