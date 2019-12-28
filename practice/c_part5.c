#include<stdio.h>
// eggs produced in the company
/* problem code
int main(){
    printf("the number of the eggs per day: ");
    int eggs;
    scanf("%i",&eggs);

    double dozen = eggs / 12;

    printf("The dozen of eggs you have is %f \n",dozen);

    return 0;
}
*/


/* Explanation

the above code is right but the problem is that even if the eggs produced is 18 it shows 1 dozen of eggs which is wrong

*/

/* Problem

problem is the above code is that the eggs are int and the number 12 is also int
therefore we are dividing the integer with the integer so at the output we get integer and we are converting that integer into double

for eg;
double dozen = eggs / 12 ====  18 / 12 = 1.... this one is converted in double .... 1.0000
 */

#include<stdio.h>

int main(){
    printf("please enter the number of eggs produced per day: ");
    int eggs ;
    scanf("%i",&eggs);

    double dozen = (double) eggs / 12; // type casting == converting the type of variable from int to double in this case
    printf("the eggs produced per day in the dozens are %f\n",dozen);
    return 0;
}

/* explanation

in this code we are doing type casting to avoid the problem of getting the wrong output

as in the line       double dozen = (double) eggs / 12;
in the above line the double written before eggs means we are converting the eggs variable comming from users input to a double

and if we write it as     double dozen = (double) (eggs / 12);
in this line it means we are converting the operation eggs / 12  to double an the output of this will still through an error

therefore the right code for this problem is
double dozen = (double) eggs/12;

*/



