#ifndef TRIANGLE_H
#define TRIANGLE_H

typedef struct {
    double side1;
    double side2;
    double side3;
} Triangle;

double getTrianglePerimeter(Triangle triangle);
int isTriangle(Triangle triangle);
double getTriangleArea(Triangle triangle);
double degreesToRadians(double degrees);
double getThirdSideLength(double side1, double side2, double angle);
double getInscribedCircleRadius(Triangle triangle);
double getTriangleHeight(Triangle triangle);
double getAngleBetweenSides(Triangle triangle);

#endif
