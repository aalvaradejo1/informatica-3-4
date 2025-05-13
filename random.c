#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int numrolls;
    int count = 0;

    printf("Enter the number of rolls you want: ");
    scanf("%d", &numrolls);

    srand(time(NULL));

    while (count < numrolls ){
       
    int diceRoll = (rand() % 6) + 1; 

    printf("You rolled a: %d\n", diceRoll);
        ++count;
    }
    
    return 0;
}
