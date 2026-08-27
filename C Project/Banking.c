#include <stdio.h>
#include <stdlib.h>


void checkBalance(float balance);
float deposite();
float withdraw(float balance);


int main(){

    int choice = 0;
    float balance = 0.0f;

    printf("\n------Welcome to Z bank------");

    do{
        printf("\nSelect an option => ");
        printf("\n1. Check balance");
        printf("\n2. Deposite money");
        printf("\n3. Withdrawl money");
        printf("\n4. Exit");

        printf("\nEnter your choice: "); 
        scanf("%d", &choice);

        switch(choice){
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += deposite();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("\nThankyou for keeping trusting");
                break;
            default:
                printf("\nInvalid choice!");
        }


    }while(choice != 4);

    return 0;
}


void checkBalance(float balance){
    printf("\nYour current balance is $%.2f", balance);
}

float deposite(){

    float amount = 0.0f;

    printf("\nHow much would you like to deposite: $");
    scanf("%f", &amount);

    if(amount < 0){
        printf("Invalid amount!");
        return 0.0f;     
    }
    else{
        printf("\nSuccessfully deposited $%.2f", amount);
    }

    return amount;

}

float withdraw(float balance){

    float amount = 0.0f;
  
    printf("\nHow much would you like to Withdrawl: $");
    scanf("%f", &amount);

    if(amount <0 || amount > balance){
        printf("\nNot enough balance in the account, balance = %.2f ----", balance);
    }
    else{
        printf("\nSuccessfully withdrew $%.2f", amount);
    }

    return amount;

}

