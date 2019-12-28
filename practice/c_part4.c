#include<stdio.h>
// find the area of the circule
int main(){
    int radius;
    printf("Please Enter the value for the radius:  ");
    scanf("%i",&radius);
/*
    //int area;

    // logical area
    //area = 3.14159 * (radius * radius);  // in this we are not getting the float value becoz we assigned int to that variable

*/
    double area; // now we assigned here a double data tyape which is actually floating point value
    area = 3.14159 * (radius * radius);

    printf("%f\n",area); // %f is used for displaying the floating point values

    printf("the area of the circle with radius %i is an %f\n",radius,area);

    return 0;
}

/* explanation
//// data types

1) double  %f
2) int     %i

*/
