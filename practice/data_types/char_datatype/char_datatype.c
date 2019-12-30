#include<stdio.h>
// in this we are using the new data type which is char can be represented in the single quotes = ' '
int main(){
    char first_char = 'A'; // char are given in ' ' quotes,
    printf("%c\n",first_char); //%c is used for printing the char
    //return 0;
    user_input();
}

int user_input(){
    char input_from_user; // in this we are taking the character from user and printing it
    scanf("%c",&input_from_user);
    printf("%c\n",input_from_user);
    return 1;
}

/*Note:= char should always in '' (single quotes)*/
