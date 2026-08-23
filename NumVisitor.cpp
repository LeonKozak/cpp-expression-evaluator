#include "NumVisitor.h"
#include <stdexcept>

double NumVisitor::visit(AddExp* addExp) {
    return addExp->getLeft()->evaluate() + addExp->getRight()->evaluate();
}
/* *
 * Evaluates an addition expression.
 * @methods
 * - visit(AddExp*): Returns the sum of left and right operand evaluations.
 */

double NumVisitor::visit(SubExp* subExp) {
    return subExp->getLeft()->evaluate() - subExp->getRight()->evaluate();
}
/* *
 * Evaluates a subtraction expression.
 * @methods
 * - visit(SubExp*): Returns the difference of left and right operand evaluations.
 */
double NumVisitor::visit(MulExp* mulExp) {
    return mulExp->getLeft()->evaluate() * mulExp->getRight()->evaluate();
}
/* *
 * Evaluates a multiplication expression.
 * @methods
 * - visit(MulExp*): Returns the product of left and right operand evaluations.
 */
double NumVisitor::visit(DivExp* divExp) {
    double rightVal = divExp->getRight()->evaluate();
    if (rightVal == 0) {
        throw std::invalid_argument("Cannot divide by zero");
    }
    return divExp->getLeft()->evaluate() / rightVal;
}
/* *
 * Evaluates a division expression.
 * @methods
 * - visit(DivExp*): Returns the result of left operand divided by right operand.
 *                   Throws an exception if dividing by zero.
 */
double NumVisitor::visit(ModExp* modExp) {
    double rightVal = modExp->getRight()->evaluate();
    if (rightVal == 0) {
        throw std::invalid_argument("Cannot mod by zero");
    }
    return static_cast<int>(modExp->getLeft()->evaluate()) % static_cast<int>(rightVal);
}
/* *
 * Evaluates a modulus expression.
 * @methods
 * - visit(ModExp*): Returns the modulus of left operand by right operand.
 *                   Throws an exception if modulus by zero is attempted.
 */
double NumVisitor::visit(ConstExp* constExp) {
    return constExp->evaluate();
}
/* *
 * Evaluates a constant expression.
 * @methods
 * - visit(ConstExp*): Returns the constant value.
 */