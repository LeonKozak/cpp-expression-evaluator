#ifndef SUBEXP_H
#define SUBEXP_H
#include "BinaryExp.h"
#include "Visitor.h" 
class SubExp : public BinaryExp {
public:
    SubExp(Exp* l, Exp* r);
    string toStr() const override;
    double evaluate() const override;

    double eval(Visitor* visitor) override;
};

#endif 
