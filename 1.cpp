#include "gurvaljin.h"
#include <math.h>

double getTrianglePerimeter(Triangle triangle) {
    return triangle.side1 + triangle.side2 + triangle.side3;
}

int isTriangle(Triangle triangle) {
    if (triangle.side1 + triangle.side2 > triangle.side3 &&
        triangle.side2 + triangle.side3 > triangle.side1 &&
        triangle.side3 + triangle.side1 > triangle.side2) {
        return 1; // Triangle is valid
    } else {
        return 0; // Triangle is not valid
    }
}

double getTriangleArea(Triangle triangle) {
    double semiPerimeter = getTrianglePerimeter(triangle) / 2.0;
    double area = sqrt(semiPerimeter * (semiPerimeter - triangle.side1) *
                       (semiPerimeter - triangle.side2) *
                       (semiPerimeter - triangle.side3));
    return area;
}

double degreesToRadians(double degrees) {
    return degrees * M_PI / 180.0;
}

double getThirdSideLength(double side1, double side2, double angle) {
    double angleRad = degreesToRadians(angle);
    double thirdSideSquared = side1 * side1 + side2 * side2 -
                              2 * side1 * side2 * cos(angleRad);
    double thirdSide = sqrt(thirdSideSquared);
    return thirdSide;
}

double getInscribedCircleRadius(Triangle triangle) {
    if (!isTriangle(triangle))
        return -1; // Invalid triangle

    double perimeter = getTrianglePerimeter(triangle);
    double area = getTriangleArea(triangle);
    double radius = 2 * area / perimeter;
    return radius;
}

double getTriangleHeight(Triangle triangle) {
    if (!isTriangle(triangle))
        return -1; // Invalid triangle

    double area = getTriangleArea(triangle);
    double base = triangle.side1; // Assuming side1 is the base of the triangle
    double height = (2 * area) / base;
    return height;
}

double getAngleBetweenSides(Triangle triangle) {
    if (!isTriangle(triangle))
        return -1; // Invalid triangle

    double angleRad = acos((triangle.side1 * triangle.side1 +
                            triangle.side2 * triangle.side2 -
                            triangle.side3 * triangle.side3) /
                           (2 * triangle.side1 * triangle.side2));
    double angleDeg = angleRad * 180.0 / M_PI;
    return angleDeg;
}
