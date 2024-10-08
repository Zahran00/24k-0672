//IN MY OPINION WHILE LOOP WILL BE THE BEST OPTION AS IT HAS A TERMINATION CONDITION AT THE BEGINNING OF THE LOOP, SINCE FOR LOOP CAN NOT HAVE A TERMINATIING CONDITION AND DO WHILE LOOP RUNS ATLEAST ONE TIME BEFORE  MEETING THE TERMINATING CONDITION SO THESE ARE LESS SUITABLE IN COMPARISION WITH WHILE LOOP.

#include <stdio.h>

int main(){
	int num = 1;
	int value = 0;
	while(num != 0 ){
	    
	printf("input num or enter 0 to stop \n");
	scanf("%d",&num);
	value = value + num;
	printf("Sum is: %d \n", value);
	if (num == 0){
	    printf("Since input is zero program has ended!");
	}
	}
    
}
