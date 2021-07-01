//1. Write a program to count set bits.

#include<stdio.h>
int main()
{
    int num,i,setBitCount;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(i = 0, setBitCount = 0 ; i < 32 ; i++)
    {
        if( num & (1 << i) )
        {
            setBitCount++;
        }

    }
    printf("\nNumber set bits in the given number %d is : %d",num,setBitCount);

    return 10;
}
/*
Output:
---------------------------------------------------
test case 1
---------------------------------------------------
Enter the number : 5

Number set bits in the given number 5 is : 2
---------------------------------------------------
test case 2
---------------------------------------------------
Enter the number : 7

Number set bits in the given number 7 is : 3
---------------------------------------------------
test case 3
---------------------------------------------------
Enter the number : 15

Number set bits in the given number 15 is : 4
---------------------------------------------------
test case 3
---------------------------------------------------
Enter the number : 32

Number set bits in the given number 32 is : 1
---------------------------------------------------

*/
