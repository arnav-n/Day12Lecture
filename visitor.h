#ifndef VISITOR_H
#define VISITOR_H

#include "implicit2D.h"
#include "polygon.h"
#include "rect.h"

/* a visitor can visit any of my specific data types */
class Visitor {
  public:
    virtual void visit(Polygon *e) = 0;
    virtual void visit(Implicit2D *e) = 0;
    virtual void visit(Rect *e) = 0;
};
#endif

