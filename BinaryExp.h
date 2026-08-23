#ifndef BINARYEXP_H
#define BINARYEXP_H
#include "Exp.h"
class BinaryExp : public Exp {
protected:
    Exp* left;  
    Exp* right; 

public:
    BinaryExp(Exp* l, Exp* r);
    virtual ~BinaryExp();

    Exp* getLeft() const;
    Exp* getRight() const;
};

#endif 
