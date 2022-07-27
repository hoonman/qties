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


class vectorstorage
{
public:
    vectorstorage(){}
    vector<Shape*> getVector();
    void setVector(vector<Shape*> myShapes);
    vector<Shape*> globalvector;
};


#endif // STORAGE_H
