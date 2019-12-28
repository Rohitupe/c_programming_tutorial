// taking input from the user
#include<stdio.h>

int main(){
    int radius;
    printf("Please enter the value for radius "); // to print the more in formation for the user

    scanf("%i",&radius); // address of operator

    int y = radius / 2;

    printf("the value of y is %i\n for the value of x is %i\n",y,radius); // passing the radius and the y both
    return 0;
}

/*explanation

// scanf will take the input from the user but we need to specify what kind of input we want to get in this case it is an integer

*/
