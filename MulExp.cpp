#include "MulExp.h"
MulExp::MulExp(Exp* l, Exp* r) : BinaryExp(l, r) {}
string MulExp::toStr() const {
    return "(" + left->toStr() + " * " + right->toStr() + ")";
}
double MulExp::evaluate() const {
    return left->evaluate() * right->evaluate();
}
double MulExp::eval(Visitor* visitor) {
    return visitor->visit(this);  
}
/* *
 * Represents a multiplication expression.
 * @methods
 * - toStr(): Returns multiplication as string.
 * - evaluate(): Returns left * right.
 * - eval(): Calls the visitor's visit method to evaluate the expression.
 */