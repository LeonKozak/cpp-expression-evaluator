#include <iostream>
#include <string>
#include <memory>

#include "Exp.h"
#include "ConstExp.h"
#include "AddExp.h"
#include "SubExp.h"
#include "MulExp.h"
#include "DivExp.h"
#include "ModExp.h"
#include "Visitor.h"
#include "NumVisitor.h"

using namespace std;

void Test_Case_1_AddExpr() {
    ConstExp* c1 = new ConstExp(3);
    ConstExp* c2 = new ConstExp(4);
    AddExp* e1 = new AddExp(c1, c2);

    cout << e1->toStr() << endl;
    Visitor* visitor = new NumVisitor();
    cout << e1->eval(visitor) << endl;

    delete e1;
    delete visitor;
}

void Test_Case_2_SubExpr() {
    ConstExp* c1 = new ConstExp(10);
    ConstExp* c2 = new ConstExp(4);
    SubExp* e2 = new SubExp(c1, c2);

    cout << e2->toStr() << endl;
    Visitor* visitor = new NumVisitor();
    cout << e2->eval(visitor) << endl;

    delete e2;
    delete visitor;
}

void Test_Case_3_MulExpr() {
    ConstExp* c1 = new ConstExp(5);
    ConstExp* c2 = new ConstExp(4);
    MulExp* e3 = new MulExp(c1, c2);

    cout << e3->toStr() << endl;
    Visitor* visitor = new NumVisitor();
    cout << e3->eval(visitor) << endl;

    delete e3;
    delete visitor;
}

void Test_Case_4_DivExpr() {
    ConstExp* c1 = new ConstExp(20);
    ConstExp* c2 = new ConstExp(4);
    DivExp* e4 = new DivExp(c1, c2);

    cout << e4->toStr() << endl;
    Visitor* visitor = new NumVisitor();
    cout << e4->eval(visitor) << endl;

    delete e4;
    delete visitor;
}

void Test_Case_5_ModExpr() {
    ConstExp* c1 = new ConstExp(10);
    ConstExp* c2 = new ConstExp(3);
    ModExp* e5 = new ModExp(c1, c2);

    cout << e5->toStr() << endl;
    Visitor* visitor = new NumVisitor();
    cout << e5->eval(visitor) << endl;

    delete e5;
    delete visitor;
}

void Test_Case_6_ConstExpr() {
    ConstExp* c1 = new ConstExp(7);

    cout << c1->toStr() << endl;
    Visitor* visitor = new NumVisitor();
    cout << c1->eval(visitor) << endl;

    delete c1;
    delete visitor;
}

int main() {
    cout << "Running test cases:" << endl;

    Test_Case_1_AddExpr();
    Test_Case_2_SubExpr();
    Test_Case_3_MulExpr();
    Test_Case_4_DivExpr();
    Test_Case_5_ModExpr();
    Test_Case_6_ConstExpr();

    return 0;
}
