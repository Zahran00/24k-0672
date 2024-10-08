#include <stdio.h>

int main(){
	int num,i;
	printf("Enter Number : ");
	scanf("%d",&num);
	
	for(i=0; num!=0; i++){
		num/=10;
	}
	if(i==1) printf("The Number is Single digit");
	else printf("The Number is Multiple digit");
}
