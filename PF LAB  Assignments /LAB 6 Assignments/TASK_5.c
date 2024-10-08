#include <stdio.h>

int main(){
	int num=65536,count=2;
	while(num!=0){
		printf("%d,",num);
		num=num/count;
		count++;
	}
	printf("%d",num);
}
