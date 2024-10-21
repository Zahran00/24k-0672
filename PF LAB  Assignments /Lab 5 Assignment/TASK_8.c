//Create a program that counts the number of 1s in the binary representation of a number.
#include <stdio.h>
int main(){
    int num,check,count=0;
    printf("Enter any binary number ");
    scanf("%d",&num);
    while(num > 0) {
        check = num % 10;
        if (check == 1){
            count++;
        }  
        num/= 10;
    }
    printf("Amount of 1s in binary number: %d",count);
}
