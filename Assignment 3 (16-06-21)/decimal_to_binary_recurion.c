/*
3. Write program to convert Decimal to Binary using recursion.
*/
Code:
#include <stdio.h>
void recursion(int x);
void main()
{
    recursion(4);
}
void recursion(int x)
{
    if(x > 1)
    {
        recursion(x/2);
    }
    printf("%d\n",x%2);
}
