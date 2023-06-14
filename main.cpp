#include <stdio.h>
#include "gurvaljin.h"

int main() {
    Triangle triangle;
    int choice;
    double angle;
    double degrees;
    
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%lf %lf %lf", &triangle.side1, &triangle.side2, &triangle.side3);
    while(1)
    {
	    printf("Select an operation:\n");
	    printf("1. Calculate perimeter\n");
	    printf("2. Check if triangle is valid\n");
	    printf("3. Calculate area\n");
	    printf("4. Calculate the length of the third side given two sides and the angle between them\n");
	    printf("5. Calculate the radius of the inscribed circle\n");
	    printf("6. Calculate the height of the triangle\n");
	    printf("7. Calculate the angle between the first two sides\n");
	    printf("8. Convert the degree to radians\n");
	    printf("Enter your choice: ");
	    scanf("%d", &choice);
	    
	    switch (choice) {
	        case 1:
	            printf("Perimeter: %.2lf\n", getTrianglePerimeter(triangle));
	            break;
	        case 2:
	            if (isTriangle(triangle))
	                printf("Triangle is valid\n");
	            else
	                printf("Triangle is not valid\n");
	            break;
	        case 3:
	            printf("Area: %.2lf\n", getTriangleArea(triangle));
	            break;
	        case 4:
	            printf("Enter the angle between the two sides (in degrees): ");
	            scanf("%lf", &angle);
	            printf("Length of the third side: %.2lf\n", getThirdSideLength(triangle.side1, triangle.side2, angle));
	            break;
	        case 5:
	            printf("Radius of the inscribed circle: %.2lf\n", getInscribedCircleRadius(triangle));
	            break;
	        case 6:
	            printf("Height of the triangle: %.2lf\n", getTriangleHeight(triangle));
	            break;
	        case 7:
	            printf("Angle between the first two sides: %.2lf\n", getAngleBetweenSides(triangle));
	            break;
	        case 8:
	        	printf("Enter degree:");
	        	scanf("%lf", &degrees);
	        	printf("Degree to radians: %2lf\n", degreesToRadians(degrees));
	        	
	        default:
	            printf("Invalid choice\n");
	            break;
    		}
    }
    
    return 0;
}
