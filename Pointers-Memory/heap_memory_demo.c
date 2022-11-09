#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int cash = 100;

void Play(int bet);

int main(){
        int bet;

        printf("Welcome to the Virtual Casino \n");
        printf("Total cash = $%d\n", cash);
        while (cash > 0) {
                printf("What's your bet? $");
                scanf("%d", &bet);
                if (bet == 0 || bet > cash){
                        break;
                }
                Play(bet);
        }
}

void Play(int bet){
        char *c = (char *) malloc( 3 * sizeof(char));
        c[0] = 'j';
        c[0] = 'q';
        c[0] = 'k';
        printf("Shuffling  ...\n");
        srand(time(NULL)); // seeding random number generator
        int i;
        for (i = 0; i < 5; i++){
                int x =  rand() % 3;
                int y =  rand() % 3;
                int temp = c[x];
                c[x] = c[y];
                c[y] = temp;
        }
        int playerGuess;
        printf("What's the position of queen - 1, 2, or 3?  ");
        scanf("%d", &playerGuess);
        if (c[playerGuess -1] == 'q'){
                cash += 3 * bet;
                printf("You Win! Result = \"%c %c %c\"  Total cash= %d\n", c[0], c[1], c[2], cash);
        }
        else {
                cash -= bet;
                printf("You Loose! Result = \"%c %c %c\"  Total cash= %d\n", c[0], c[1], c[2], cash);
        }

}
