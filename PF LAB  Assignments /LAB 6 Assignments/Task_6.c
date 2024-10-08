#include <stdio.h>
int main(){
	int num1=1,num2=2,count,num=1;
    count = 9;
	printf("1,2,");
	for(int loop=0; loop<count-3; loop++){
		num=num1*num2;
		num1=num2;
		num2=num;
		printf("%d,",num);
	}
		num=num1*num2;
		num1=num2;
		num2=num;
		printf("%d",num);

}
