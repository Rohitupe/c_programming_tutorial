#include<stdio.h>
// Working on Strings which is very very important topic

// string = is a sequence of the character
// ARRAY
int main(){

    char name[31];
    printf("Please Enter Your name but no space is allowed in between your name: ");
    scanf("%s",name);

    printf("hi, Your name is %s\n",name);

    return 0;

}

/* Explanation

char is used for getting the string
in this name has an 30 character in it but we need to pass one more character in the list to tell to end at this point which is \0==null terminator

to get input from the user we will be passing the varibale in it which will not be using &name just put the variable name as it is which is == name
for string we use %s

if user try to enter his name with spaces for eg = Rohit Dayanand Tupe
then it will print Rohit as it stop printing after the space

to get full name we need to pass three variable as first_name, middle_name, last_name. then it will work.

*/
