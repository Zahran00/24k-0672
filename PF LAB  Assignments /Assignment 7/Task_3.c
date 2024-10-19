#include <stdio.h>

int main() {
    int num[9];
    int i = 0,min,max;
    printf("Enter 9 numbers: \n");
    for(i = 0;i < 10;i++){
        scanf("%d",&num[i]);
    }
    
    
    max = num[0];
    min = num[0];
    for(i = 0;i < 9;i++){
        if (num[i + 1] > max){
            max = num[i+1];
        }
        if (num[i + 1] < min){
            min = num[i + 1];
        }
        
    }
    printf("Minimum = %d\n",min);
    printf("Maximum = %d\n",max);
    
}
