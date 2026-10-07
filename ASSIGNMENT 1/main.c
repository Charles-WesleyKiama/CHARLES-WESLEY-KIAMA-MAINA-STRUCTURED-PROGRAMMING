#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    const double pi = 3.14159265358979323846;
 double radius;

    double surfaceArea;

    printf("Enter radius: \n");
    scanf("%lf", &radius);


    surfaceArea = 4*pi*pow(radius,2);

    printf("The surface area of sphere of radius %lf = %lf\n", radius, surfaceArea);

    return 0;
}
