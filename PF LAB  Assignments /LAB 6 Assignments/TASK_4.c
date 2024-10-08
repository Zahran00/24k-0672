#include <stdio.h>

int main(){
	int num1=0,num2=1,temp,num;
	num = 6;
	for(int loop=0; loop<num - 1; loop++){
		temp=num1+num2;
		num1=num2;
		num2=temp;
		printf("%d,",temp);
	}
        temp=num1+num2;
		num1=num2;
		num2=temp;
		printf("%d",temp);	
}
