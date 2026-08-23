#include "ConstExp.h"
ConstExp::ConstExp(double val) : value(val) {}
string ConstExp::toStr() const {
    return to_string(value);
}
double ConstExp::evaluate() const {
    return value;
}
double ConstExp::eval(Visitor* visitor) {
    return visitor->visit(this); 
}

/* *
 * Represents a constant value.
 * @methods
 * - toStr(): Converts value to string.
 * - evaluate(): Returns value.
 * - eval(): Calls the visitor's visit method to evaluate the expression.
 */