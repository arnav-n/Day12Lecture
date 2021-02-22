#ifndef AAVISITOR_H
#define AAVISITOR_H

#include "implicit2D.h"
#include "polygon.h"
#include "rect.h"
#include "visitor.h"

/* a visitor can visit any of my specific data types */
class approxAreaVisitor : public Visitor {
  public:
    virtual void visit(Polygon *e) {
    	double estW = e->getMaxX() - e->getMinX();
    	double estH = e->getMaxY() - e->getMinY();
    	cout << " approx area for a polygon: " << estW*estH << endl;
    }

    virtual void visit(Implicit2D *e) {
    	cout << "The area for the ellipse is: " << 3.14*e->getMaxR()*e->getMaxR() << endl;
    }

    virtual void visit(Rect *e) {
			cout << "The area for the rect is: " << e->getArea() << endl;
    }
};
#endif

