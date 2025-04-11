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
printf("\nenter a number: ");
scanf("%d", &number);

if (number % 2 == 0){
    printf("%d is an even number\n", number);
} else {
    printf("%d is an odd number\n", number);
}

// read any day number as an integer and display the day name in string format
int integer;
printf("\nEnter a number acording to the days of the week: ");
scanf("%d", &integer);

if(integer == 1){
    printf("It is Sunday\n");
} else if (integer == 2){
    printf("It is Monday\n");
} else if (integer == 3){
    printf("It is Tuesday\n");
}  else if (integer == 4){
    printf("It is Wednesday\n");
} else if (integer == 5){
    printf("It is Thursday\n");
} else if (integer == 6){
    printf("It is Friday\n");
} else if (integer == 7){
    printf("It is Saturday\n");
} else {
    ("Does not apply\n");
}

//calculator
int num1;
int num2;
char operation;

printf("Enter any number you want: ");
scanf(" %d", &num1);
printf("Enter any other number you want: ");
scanf(" %d", &num2);
printf("Enter a symbol for an operation(+,-,*,/): ");
scanf(" %c", &operation);

int addition = num1 + num2;
int substraction = num1 - num2;
int multiplication = num1 * num2;
int division = num1 / num2;

if (operation == '+'){
    printf("The addition is = %d\n", addition);
} else if (operation == '-'){
    printf("The substraction is = %d\n", substraction);
} else if (operation == '*'){
    printf("The substraction is = %d\n", multiplication);
} else if (operation == '/'){
    printf("The substraction is = %d\n", division);
} else ("Enter the symbols you are asked to\n");


return 0;
}

