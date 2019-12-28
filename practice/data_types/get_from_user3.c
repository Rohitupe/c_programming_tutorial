//Format Character for Float and Double

#include<stdio.h>

int main(){
    //25000
    int dogs = 2.5e4; //hardcoding :(
    printf("%i\n",dogs);
    scientificUser();
    //return 0;
}
//lets take input from user for scientific calculation

int scientificUser(){
    printf("Enter the number of dogs you have: ");

    double dogs;
    scanf("%lf",&dogs); // in this we are using %lf becoz the input is in double always use this for getting input as double
    /* conversion character for formating our data

        %f == decimal notation
        %e == scientific notation
        %g == computer decodes //depends on  the size of exponent
        if exponent is  < -1,-2,-3,-4,-5,-6,etc
            then (scientific notation)
        if exponent is  > 1,2,3,4,5,6,7,etc
            then (decimal notation)
    */
    printf("%f,\n%e,\n%g\n",dogs,dogs,dogs); //in print %f automatically get converted into double but this wont happen in scanf
    return 0;
}

/*in the above code if user give in put in like
    233e4
then also output will be shown
*/
