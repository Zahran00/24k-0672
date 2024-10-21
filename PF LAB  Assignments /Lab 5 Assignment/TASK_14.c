//Develop a program that uses logical operators to determine if a person is eligible for a loan based on age, income, and credit score.

#include <stdio.h>

int main(){
    int loan, age, income, creditScore;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter income: ");
    scanf("%d", &income);
    printf("Enter credit Score: ");
    scanf("%d", &creditScore);
    printf("Enter amount of loan: ");
    scanf("%d", &loan);

    if(age<60 && income>20000 && creditScore>500){
        printf("You are eligible for loan of %d", loan);
    }
    else{
        printf("You are not eligible for loan");
    }
}

