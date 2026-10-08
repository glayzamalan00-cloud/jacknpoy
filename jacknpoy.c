#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int game, option, hand1, hand2, bot, choice;
    printf("Welcome to Jack n Poy.\nWould you like to play?(1 - Yes; 0 - No)\n");
    scanf("%d", &game);
    while(!(game == 0 || game == 1)){
        printf("Enter Valid Option.\nWould you like to play?(1 - Yes; 0 - No)");
        scanf("%d", &game);
    }
    while(game){
        printf("(1)Singe Player; (0)Two Player\n");
        scanf("%d", &option);
        while(!(game == 0 || game == 1)){
            printf("Enter Valid Option.\n(1)Singe Player; (0)Two Player\n");
            scanf("%d", &option);
        }
        if(option){
        srand(time(0));
        printf("Pick your option.\n");
        printf("(1)Rock\n");
        printf("(2)Paper\n");
        printf("(3)Scissors\n");
        scanf("%d", &hand1);
        bot = rand() % 3 + 1; 
        printf("Bot: ");
        if(bot == 1){
            printf("Rock\n");
        }
        else if(bot == 2){
            printf("Paper\n");
        }
        else if(bot == 3){
            printf("Scissors\n");
        }
        if((hand1 + 1) % 3 == bot){
            printf("Bot Wins.");
        }else if (hand1 == bot){
            printf("Tie.");
        }else{
            printf("You Win");
        }
        
        printf("\nDo you want to play again?(1 - Yes; 0 - No)\n");
        scanf("%d", &choice);
        if(!choice){
            game = 0;
        }
        }else{
            printf("Player 1, Pick your option.\n");
            printf("(1)Rock\n");
            printf("(2)Paper\n");
            printf("(3)Scissors\n");
            scanf("%d", &hand1);
            printf("Player 2, Pick your option.\n");
            printf("(1)Rock\n");
            printf("(2)Paper\n");
            printf("(3)Scissors\n");
            scanf("%d", &hand2);
            if((hand1 + 1) % 3 == hand2){
                printf("Player 2 Wins.");
            }else if (hand1 == hand2){
                printf("Tie.");
            }else{
                printf("Player 1 Wins");
            }
            
            printf("\nDo you want to play again?(1 - Yes; 0 - No)\n");
            scanf("%d", &choice);
            if(!choice){
                game = 0;
            }
        }
    }
    printf("\nThank you for playing!");
    return 0;   
}