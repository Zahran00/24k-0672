#include <stdio.h>

int main(){
	int num,isPrime=1;
	printf("Enter Number : ");
	scanf("%d", &num);
		if (num == 0 || num == 1){
		    isPrime = 2;
}	
	for(int i=2; i<num; i++){

		if(num%i==0){
			isPrime=0;
		}
	}
if (isPrime == 2){
	    printf("Entered number is neither prime nor composite");}

	else if(isPrime == 1) {
	printf( "Entered number is prime");
}
	else{ printf("Entered number is composite");
}
}
