#include "SubExp.h"
SubExp::SubExp(Exp* l, Exp* r) : BinaryExp(l, r) {}
string SubExp::toStr() const {
    return "(" + left->toStr() + " - " + right->toStr() + ")";
}
double SubExp::evaluate() const {
    return left->evaluate() - right->evaluate();
}
double SubExp::eval(Visitor* visitor) {
    return visitor->visit(this); 
}
/* *
 * Represents a subtraction expression.
 * @methods
 * - toStr(): Returns subtraction as string.
 * - evaluate(): Returns left - right.
 * - eval(): Calls the visitor's visit method to evaluate the expression.
 */
