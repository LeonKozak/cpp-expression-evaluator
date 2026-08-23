#include "DivExp.h"
#include <stdexcept>
DivExp::DivExp(Exp* l, Exp* r) : BinaryExp(l, r) {}

string DivExp::toStr() const {
    return "(" + left->toStr() + " / " + right->toStr() + ")";
}

double DivExp::evaluate() const {
    double rightValue = right->evaluate();
    if (rightValue == 0) {
        throw std::invalid_argument("Division by zero");
    }
    return left->evaluate() / rightValue;
}

double DivExp::eval(Visitor* visitor) {
    return visitor->visit(this);  
}
/* *
 * Represents a division expression.
 * @methods
 * - toStr(): Returns division as string.
 * - evaluate(): Returns left / right, throwing exception for division by zero.
 * - eval(): Calls the visitor's visit method to evaluate the expression.
 */