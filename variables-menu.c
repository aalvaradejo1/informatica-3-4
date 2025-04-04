#include <stdio.h>
int main(){

char snack1[] = "doritos";
char snack2[] = "chocolate";
char snack3[] = "soda";

float snack1value = 1.50;
float snack2value = 2.00;
float snack3value = 0.75;

int snack1stock = 20;
int snack2stock = 15;
int snack3stock = 30;


 printf("Welcome to the snack shop!\n");
 printf("--------------------------\n");
printf("1. %s - $%.2f - %d Available\n", snack1, snack1value, snack1stock);
printf("2. %s - $%.2f - %d Available\n", snack2, snack2value, snack2stock);
printf("3. %s - $%.2f - %d Available\n", snack3, snack3value, snack3stock);
return 0;
}
