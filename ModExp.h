#ifndef MODEXP_H
#define MODEXP_H
#include "BinaryExp.h"
#include "Visitor.h"
class ModExp : public BinaryExp {
public:
    ModExp(Exp* l, Exp* r);
    string toStr() const override;
    double evaluate() const override;
    double eval(Visitor* visitor) override; 
};
#endif
