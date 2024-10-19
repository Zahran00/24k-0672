#include <stdio.h>

int main() {
    int num[8];
    int i = 0;
    printf("Enter 9 numbers: \n");
    for(i = 0;i < 9;i++){
        scanf("%d",&num[i]);
    }
    
    i = i - 1;
        printf("Reversed: ");
    while (i >= 0){
        printf("%d",num[i]);
        i-= 1;
    }
}
