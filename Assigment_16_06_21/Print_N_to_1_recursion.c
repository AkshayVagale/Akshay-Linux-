/*
1. Write a program to Print N to 1 using recursion and also draw the diagram .
*/
#include <stdio.h>
void recursion(int x);
void main()
{
    int N;
    printf("Enter N\n");
    scanf("%d",&N);
    printf("N to 1 numbers are\n");
    recursion(N);
}
void recursion(int x)
{
    if(x > 0)
    {
        printf("%d\n",x);
        recursion(--x);
    }
}
