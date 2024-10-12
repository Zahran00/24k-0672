#include <stdio.h>
int main() {
    int age;
    char status[3];

    printf("Input your age and citizenship (e.g 18 US)\n");
    scanf("%d", &age);
    scanf("%s", status);

    if (age > 17 && status[0] == 'U' && status[1] == 'S') {
 
        printf("You are eligible to vote\n");
    } 
    else {
        printf("You are not eligible to vote\n");
    }
}

