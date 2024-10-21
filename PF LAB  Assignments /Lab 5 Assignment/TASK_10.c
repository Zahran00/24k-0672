//Create a program that calculates the sum of digits of a number until the result is a single digit (e.g., 123 -> 6).

#include <stdio.h>

int main(){
    int num;
    int sum=0;
    printf("Enter number: ");
    scanf("%d", &num);
    while (num>0){
        sum+= num%10;
        num/=10;
    }
    printf("Sum: %d", sum);
}
