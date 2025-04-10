#include <stdio.h>
int main(){

    //checks if the integers are equal or not
int number1;
int number2;

printf("enter an integer: ");
scanf("%d", &number1);
printf("enter an integer: ");
scanf("%d", &number2);

if (number1 == number2) {
    printf("%d is equal to %d\n", number1, number2);
} else {
    printf("%d is not equal to %d\n", number1, number2);
}


//check whether a number is even or odd
int number;
printf("enter a number: ");
scanf("%d", &number);

if (number % 2 == 0){
    printf("%d is an odd number\n", number);
} else {
    printf("%d is an even number\n", number);
}

return 0;
}

