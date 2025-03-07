/*Deals a random hand of cards*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define NUM_RANKS 13
#define NUM_SUITS 4

int main(void){
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
    int num_cards, rank, suit;

    const char rank_code[] = {'2','3','4','5','6','7','8','9','t','j','k','q','a'};
    const char suit_code[] = {'c','d','h','s'};

    srand((unsigned) time(NULL));

    printf("Enter the number of cards in hand: ");
    scanf("%d", &num_cards);

    printf("Your hand:");
    while (num_cards>0){
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;
        if (!in_hand[suit][rank]){
            in_hand[suit][rank] = true;
            num_cards--;
            printf(" %c%c", suit_code[suit], rank_code[rank]);
        }
    }
    printf("\n");
    return 0;
}