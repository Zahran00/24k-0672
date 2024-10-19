#include <stdio.h>

int main() {
    int num[8];
    int sum;
    printf("Enter 9 numbers for sum: \n");
    for(int i = 0;i < 9;i++){
        scanf("%d",&num[i]);
        sum = sum + num[i];
        
        
    }
    printf("Sum: %d",sum);
    

}
