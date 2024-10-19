#include <stdio.h>

int main() {
    int  k=1,r=0,n,count= 0,z = 0;
    printf("array size = ");
    scanf("%d",&n);
    int num[n],more[n];
    
    for(int i = 0;i < n;i++ ){
        count++;
        printf("Element %d = ",count);
        scanf("%d",&num[i]);
        more[i] = -1;
    }
    while (num[0] != num[k] && k < n){
        k++;
        
    }
    if (k < n){
        more[0] = 1;   
    }
    k = 2;
    while (num[1] != num[k] && k < n){
        k++;
        
    }
    if (k < n){
        more[1] = 1;   
    }
    k = 3;
    while (num[2] != num[k] && k < n){
        k++;
        
    }
    if (k < n){
        more[2] = 1;   
    }
    k = 4;
    while (num[3] != num[k] && k < n){
        k++;
        
    }
    if (k < n){
        more[3] = 1;   
    }
    k = 5;
    while (num[4] != num[k] && k < n){
        k++;
        
    }
    if (k < n){
        more[4] = 1;   
    }

    printf("Number ");
    for(int i = 0;i < n;i++ ){
        if(more[i] == 1 && z == 0){
        printf("%d ",num[i]);
        z++;
        r++;
        }
        else if(more[i] == 1){
            printf("and %d ",num[i]);
        }
    }
    printf("in array occur more than once");
    
}
