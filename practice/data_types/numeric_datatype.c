// int and double datatype are completed in this study float data type

// int = 7,8,9,-1,-2,-3,0
// double , flooat = fraction value = 10.2 , etc.



#include<stdio.h>

int main(){
    // int , float , double
    int dogs = 6;
    float number = 1111.1111F;
    float numbers = 24.23;
    double value = 1111.11111;
    // when to use double or float
    // precision = how much data the variable can hold

    /* eg;
    for double = 99999.99999999999999
    for float = 72.45
    */

    printf("%i\n%f\n%f\n",dogs,value,number); // %f is used for both float and double
    /*
    but if we used %f for float then actually it print it as an double
    // the float will useful with low memory space
    //becoz double take up twice as much space
    */

    return 0;

}


/*
in the above code you  will be able to see difference between the float and double

to assign float  we use F at the end but not necessary

double used for big and precise value
//numbers are stored on computer in base2 or binary format
*/

