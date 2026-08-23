#ifndef EXP_H
#define EXP_H

#include <string>
using namespace std;

class Visitor;

class Exp {
public:
    virtual ~Exp() = default;
    virtual string toStr() const = 0;
    virtual double evaluate() const = 0;
    
    virtual double eval(Visitor* visitor) = 0; 
    // Virtual method for part B of assignment
};

#endif
