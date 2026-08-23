#ifndef VISITOR_H
#define VISITOR_H

class AddExp;
class SubExp;
class MulExp;
class DivExp;
class ModExp;
class ConstExp;

class Visitor {
public:
    virtual ~Visitor() = default;

    virtual double visit(AddExp* addExp) = 0;
    virtual double visit(SubExp* subExp) = 0;
    virtual double visit(MulExp* mulExp) = 0;
    virtual double visit(DivExp* divExp) = 0;
    virtual double visit(ModExp* modExp) = 0;
    virtual double visit(ConstExp* constExp) = 0;
};

#endif
/* *
 * The Visitor class provides an interface for visiting different types of 
 * expression nodes, enabling operations on various expression subclasses 
 * without altering their structure.
 */
