#include "rect.h"
#include "visitor.h"


void Rect:: accept(class Visitor &v){
    v.visit(this);
}