#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

        int guess;

        printf("Guess if it's resulting Heads(1) or Tails(2):");
        scanf("%d", &guess);
    
    srand(time(NULL));

  
    int coinflip = (rand() % 2) + 1; 

    if (coinflip == 1){
        printf("Heads\n");
    } 
        else{
            printf("Tails\n");
        }

    return 0;
}