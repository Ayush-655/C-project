#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int guess = 0;
    int tries = 0;

    int min = 1;
    int max = 100;

    int answer = (rand() % (max - min + 1)) + min ;

    printf("-----Number Guessing Game-----\n");

    do{

        printf("Guess a number btn %d - %d: ", min, max);

        scanf("%d", &guess);
        tries++;

      
        if(guess > answer){
            printf("Too High!\n");
        }else if(guess < answer){
            printf("Too Low!\n");
        }else{
            printf("Invalid input!\n");
        }
        

    }while(guess != answer);

    printf("The answer is = %d\n", answer);
    printf("Took you %d tries to get the answer", tries);

    return 0;
} 