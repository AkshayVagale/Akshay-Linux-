//1. Write a program to take input as a password but should display only x's instead of characters.
//Ans-
#include <conio.h>
#include <stdio.h>
void main()
{
    char pin[255]={0};
    int i=0;

    printf("Enter a pin : ");
    for (i=0;pin[i-1] != '\r';i++) {
        pin[i]=getch();
        printf("x");
    }
    pin[i] = '\0';
    printf("\n");
    printf("Entered pin : ");
    for (i = 0; pin[i] != '\0'; i++)
        printf("%c", pin[i]);
    getch();
}
