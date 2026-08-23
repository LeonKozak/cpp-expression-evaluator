#ifndef MULEXP_H
#define MULEXP_H
#include "BinaryExp.h"
#include "Visitor.h"
class MulExp : public BinaryExp {
public:
    MulExp(Exp* l, Exp* r);
    string toStr() const override;
    double evaluate() const override;
    double eval(Visitor* visitor) override;
};

#endif
