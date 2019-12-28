#include<stdio.h>

/* project1 = Which will take input from user his first name,middle name,last name,age, percent and will print them */

int main(){
    char F_name[31];
    printf("enter Your first name: ");
    scanf("%s",F_name);

    char M_name[31];
    printf("Enter your middle name: ");
    scanf("%s",M_name);

    char L_name[31];
    printf("Enter your last name: ");
    scanf("%s",L_name);

    printf("\n");

    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    double percent;
    printf("Enter your 10th class percentage: ");
    scanf("%lf",&percent);

    printf("%s %s %s\n%i %g\n",F_name,M_name,L_name,age,percent);

    return 0;
    }
