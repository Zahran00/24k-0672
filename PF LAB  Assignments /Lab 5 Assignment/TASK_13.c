//Write a program that uses bitwise operators to perform encryption and decryption of a character.

#include <stdio.h>

int main(){
    char ch;
    int key= 10;
    char encrypt, decrypt;

    printf("Enter a character: ");
    scanf("%c", &ch);

    int option;
    printf("Select option:\n 1)Encrypt \n 2)Decrypt\n");
    scanf("%d", &option);

    switch (1)
    {
    case 1:
        encrypt= ch^10;
        printf("Encrypted character: %c\n", encrypt);
        break;
    case 2:    
        decrypt= ch^10; 
        printf("Decrypted character: %c\n", decrypt);
    default:
        printf("Invalid option\n");
        break;
    }
    
}
