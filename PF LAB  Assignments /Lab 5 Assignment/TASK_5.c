#include <stdio.h>
int main() {
int num1,num2;
printf("Enter both the numbers: \n");
scanf("%d", &num1);
scanf("%d", &num2);

num1 > num2 ? printf("%d is greater than %d \n",num1,num2) : printf("%d is greater than %d \n",num2,num1);
}
