/*number guessing game*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX_NUMBER 100

//prototypes
void initialize_rand_number(void);
int new_secret_number(void);
void read_guesses(int secret_number);

int main(void){
    char command;
    int secret_number;

    printf("Guess the number between 1 and %d.\n\n", MAX_NUMBER);
    initialize_rand_number();
    do {
        secret_number = new_secret_number();
        printf("A new number has been chosen.\n");
        read_guesses(secret_number);
        printf("Play again? (Y/N) ");
        scanf(" %c", &command);
        printf("\n");
    }while (command == 'Y' || command == 'y');

    return 0;
}

void initialize_rand_number(void){
    srand((unsigned) time(NULL));
}

int new_secret_number(){
    return rand() % MAX_NUMBER + 1;
}

void read_guesses(int secret_number){
    int guess, num_guesses = 0;

    for(;;){
        num_guesses++;
        printf("Enter number: ");
        scanf("%d", &guess);
        if (guess == secret_number){
            printf("You won in %d guesses!\n\n", num_guesses);
            return;
        }else if (guess < secret_number){
            printf("Too low; try again.\n");
        }else{
            printf("Too high, try again.\n");
        }
    }
}