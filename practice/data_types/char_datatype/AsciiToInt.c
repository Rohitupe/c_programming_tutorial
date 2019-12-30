#include<stdio.h>

int main(){
    //1) // convert ascii character to an integer
    char character;
    printf("Please enter the character: ");
    scanf("%c",&character);
    printf("%d\n",character);

    //2) // convert integer to ascii character
    int integer;
    printf("Please Enter an integer between 0 to 127: ");
    scanf("%d",&integer);
    printf("%c\n",integer);

    //3) // adding to ascii character by getting their integer value
    char ascii_charcter = 'A' + '\t';
    printf("A(65),\\t(11) == %c(%d)\n",ascii_charcter,ascii_charcter);
}
/* explanation
1)  we are taking input as an character and displaying its ascii value

2) in this we taking the input as a number and displaying its ascii character

3) in this we are adding two separate ascii character by their integer value and displaying the third one with the both charcter and its value
 */
