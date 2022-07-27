#ifndef STORAGE_H
#define STORAGE_H
#include "Shape.h"
#include "line.h"
#include "rectangle.h"
#include "polyline.h"
#include "polygon.h"
#include "ellipse.h"
#include "text.h"
#include "vector.h"

struct Storage
{
public:
    Storage();
    vector<Shape*> getVector();
    void setVector(vector<Shape*> myShapes);
    vector<Shape*> GLOBALSHAPES;
};

#endif // STORAGE_H
