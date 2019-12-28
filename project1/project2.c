#include<stdio.h>
/* project2 = make an simple calculatoe which will do addition and subtraction only */

int main(){
    int num1,num2;

    printf("Enter the first and second number: ");
    scanf("%i,%i",&num1,&num2);

    int add;
    add = num1 + num2;
    printf("%i\n",add);

    int sub;
    sub = num1-num2;
    printf("%i\n",sub);

    int mul;
    mul = num1 * num2;
    printf("%i\n",mul);

    double div;
    div = (double) num1 / num2;
    printf("%g",div);

    return 0;
}
/* division is working with float and int both type of number */
