#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

        int guess;

        printf("Heads=1\nTails=2\nMake your guess(1 or 2):");
        scanf("%d", &guess);
    
    srand(time(NULL));

  
    int coinflip = (rand() % 2) + 1; 

    if (coinflip == 1){
        printf("Heads\n");
    } 
        else{
            printf("Tails\n");
        }

        if( coinflip == guess){
            printf("You guessed it right!!\n");
        }
        else{
            printf("You guessed wrong\n");
        }

    return 0;
}