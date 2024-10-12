//Problem 1 
#include <stdio.h>

int main() {
    int age; 
    printf("Input your age please\n");
    scanf("%d",&age);
    if (age < 13) {
        printf("According to your age, Your life stage is child");
    }
        else if (age < 20) {
             printf("According to your age, Your life stage is Teenager");
        }
             else if (age < 66) {
                 printf("According to your age, Your life stage is Adult");
             }
                 else {
                 printf("According to your age, Your life stage is senior");
             }
} 
