#ifndef CONSTEXP_H
#define CONSTEXP_H
#include "Exp.h"
#include "Visitor.h"
class ConstExp : public Exp {
private:
    double value;
public:
    ConstExp(double val);
    string toStr() const override;
    double evaluate() const override;
    double eval(Visitor* visitor) override;
};
#endif 
