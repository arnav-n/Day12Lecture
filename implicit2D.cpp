#include "implicit2D.h"
#include "visitor.h"
#include "vec2.h"


void Implicit2D:: accept(class Visitor &v){
    v.visit(this);
}