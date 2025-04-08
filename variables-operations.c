#include <stdio.h>
int main(){
//area
   int length;
   int width;

   printf("Enter the rectangle width:");
   scanf("%d", &width);
   printf("Enter the rectangle length:");
   scanf("%d", &length);

   int area = (length * width);
   int perimiter = (length * 2) + (width * 2);
 printf("Area:%d\n",area);
 printf("Perimiter:%d\n", perimiter);

// fahrenheit to celsius
 int fahrenheit;

 printf("Enter the fahrenheit degrees: ");
 scanf("%d", &fahrenheit);
 int celsius = (fahrenheit-32)/1.8;
 printf("%d°F = %d°C\n", fahrenheit, celsius);

//minutes into hours
int minutes = 349;

printf("Enter the minutes: ");
scanf("%d", &minutes);
int hours = minutes/60;
int modulus = minutes % 60;

//horas
printf("%d minutes is equal to %d hours and %d minutes\n",minutes, hours, modulus);


return 0;

}