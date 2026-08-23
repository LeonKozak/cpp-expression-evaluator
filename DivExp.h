#ifndef DIVEEXP_H
#define DIVEEXP_H
#include "BinaryExp.h"
#include "Visitor.h" 
class DivExp : public BinaryExp {
public:
    DivExp(Exp* l, Exp* r);
    string toStr() const override;
    double evaluate() const override;

    double eval(Visitor* visitor) override;
};
#endif
