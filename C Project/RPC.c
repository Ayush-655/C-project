# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int getComputerChoice();
int getPlayerChoice();
void checkWinner(int playerChoice, int computerChoice);

int getComputerChoice(){

    return (rand() % 3) + 1;
}


int getPlayerChoice(){

    int choice = 0;

    do{
        
        printf("1.Rock    2.Paper    3.Scissors\n");

        printf("Choose an option: ");
        scanf("%d", &choice);

    }while(choice < 1 || choice > 3);

    return choice;
}


void checkWinner(int playerChoice, int computerChoice){

    if(playerChoice == computerChoice){
        printf("This is a tie, play again");

    }else if(playerChoice == 1 && computerChoice == 2 ||
             playerChoice == 2 && computerChoice == 3 ||
             playerChoice == 3 && computerChoice == 1 ){
                  printf("You lost, good luck next time!\n\n");
                  printf("Computers %s beats players %s", computerChoice, playerChoice);
            }else{
                printf("Congratulation! You won!\n\n");
                printf("Your %s beats computers %s", playerChoice, computerChoice);
            }
}

int main(){

    printf("-----Rock Paper Scissors-----\n");

    int playerChoice = getPlayerChoice();
    int computerChoice = getComputerChoice();

    switch(playerChoice){
        case 1:
            printf("You Chose = Rock\n");
            break;
        case 2:
            printf("You Chose = Paper\n");       
            break;
        case 3:
            printf("You Chose = Scissors\n");
            break;
    }

    switch(computerChoice){
        case 1:
            printf("Computer Chose = Rock\n");
            break;
        case 2:
            printf("Computer Chose = Paper\n");       
            break;
        case 3:
            printf("Computer Chose = Scissors\n");
            break;
    }

    checkWinner(playerChoice, computerChoice);

    return 0;
           
}