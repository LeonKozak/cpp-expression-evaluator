#ifndef ADDEXP_H
#define ADDEXP_H

#include "BinaryExp.h"
#include "Visitor.h"
class AddExp : public BinaryExp {
public:
    AddExp(Exp* l, Exp* r);
    string toStr() const override;
    double evaluate() const override;
    double eval(Visitor* visitor) override;  // The eval method using the visitor pattern
};
#endif 
