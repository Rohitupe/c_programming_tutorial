# include<stdio.h>
# include<stdbool.h> // for boolean data type

int main(){
    bool car_is_parked = true;
    // bool car_is_parked = false; //
    printf("is parking slot Empty %i\n",car_is_parked);

    return 0;
}

/* Explanation
in the above there is no need to write _Bool for using the boolean data type
as in this code we had included the stdbool.h header file for boolean data type
so becoz of that header file we can write boolean as ( bool count = true; )
as in this we can specify the boolean as true or false
*/
