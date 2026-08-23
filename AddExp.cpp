#include "AddExp.h"
AddExp::AddExp(Exp* l, Exp* r) : BinaryExp(l, r) {}
string AddExp::toStr() const {
    return "(" + left->toStr() + " + " + right->toStr() + ")";
}
double AddExp::evaluate() const {
    return left->evaluate() + right->evaluate();
}
double AddExp::eval(Visitor* visitor) {
    return visitor->visit(this); 
}
/* *
 * Represents an addition expression.
 * @methods
 * - toStr(): Returns addition as string.
 * - evaluate(): Returns left + right.
 * - eval(): Calls the visitor's visit method to evaluate the expression.
 */
