#include <stdio.h>
int main() {
int num;
printf("Enter the number: \n");
scanf("%d", &num);

num > 0 ? printf("%d is positive \n",num) : (num < 0 ? printf("%d is negative \n",num) : printf("%d is zero",num));

}
