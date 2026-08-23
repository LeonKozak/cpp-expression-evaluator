#include "BinaryExp.h"
BinaryExp::BinaryExp(Exp* l, Exp* r) : left(l), right(r) {}

BinaryExp::~BinaryExp() {
    delete left;
    delete right;
}
Exp* BinaryExp::getLeft() const {
    return left;
}
Exp* BinaryExp::getRight() const {
    return right;
}
/* *
 * Represents a binary expression with two operands.
 * @attributes
 * - left: left operand.
 * - right: right operand.
 * 
 * @methods
 * - getLeft(): Returns left operand.
 * - getRight(): Returns right operand.
 * - Destructor: Deletes operands.
 */
