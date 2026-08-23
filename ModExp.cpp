#include "ModExp.h"
#include <stdexcept>
ModExp::ModExp(Exp* l, Exp* r) : BinaryExp(l, r) {}
string ModExp::toStr() const {
    return "(" + left->toStr() + " % " + right->toStr() + ")";
}
double ModExp::evaluate() const {
    double rightValue = right->evaluate();
    if (rightValue == 0) {
        throw std::invalid_argument("Modulus by zero");
    }
    return static_cast<int>(left->evaluate()) % static_cast<int>(rightValue);
}
double ModExp::eval(Visitor* visitor) {
    return visitor->visit(this);  
}
/* *
 * Represents a modulus expression.
 * @methods
 * - toStr(): Returns modulus as string.
 * - evaluate(): Returns left % right, throwing exception for modulus by zero.
 * - eval(): Calls the visitor's visit method to evaluate the expression.
 */