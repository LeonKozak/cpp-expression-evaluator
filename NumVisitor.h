#ifndef NUMVISITOR_H
#define NUMVISITOR_H

#include "Visitor.h"
//#include "Exp.h"
#include "AddExp.h"
#include "SubExp.h"
#include "MulExp.h"
#include "DivExp.h"
#include "ModExp.h"
#include "ConstExp.h"

class NumVisitor : public Visitor {
public:
    //double visit(Exp* exp) override;
    double visit(AddExp* addExp) override;
    double visit(SubExp* subExp) override;
    double visit(MulExp* mulExp) override;
    double visit(DivExp* divExp) override;
    double visit(ModExp* modExp) override;
    double visit(ConstExp* constExp) override;
};

#endif
/* *
 * The NumVisitor class implements the Visitor interface to evaluate 
 * numeric expressions by visiting various expression types.
 */