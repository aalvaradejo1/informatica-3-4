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
 printf("\nArea:%d\n",area);
 printf("Perimiter:%d\n", perimiter);

// fahrenheit to celsius
 int fahrenheit;

 printf("\nEnter the fahrenheit degrees: ");
 scanf("%d", &fahrenheit);
 int celsius = (fahrenheit-32)/1.8;
 printf("\n%d°F = %d°C\n", fahrenheit, celsius);

//minutes into hours
int minutes;

printf("\nEnter the minutes: ");
scanf("%d", &minutes);
int hours = minutes/60;
int modulus = minutes % 60;


printf("\n%d minutes is equal to %d hours and %d minutes\n",minutes, hours, modulus);
// area of a circle
int radius;
printf("\nEnter the value of the radius: ");
scanf("%d", &radius);

float Area = (3.14 * radius * radius);
printf("\nArea of the circle: %.2f\n", Area);

return 0;

}