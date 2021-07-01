//3. Write a program to find the given number is 2 power or not.

#include<stdio.h>

/**
 * isNumIsPowerOf_2 - returns 1 if the number under test is power of 2 else 0.
 * @num: Number under test.
 */
int isNumIsPowerOf_2(int num)
{
	return num && (!(num&(num-1)));/*Logic is if num is 2(0010) => num-1 will be 1(0001)
								     Similarly if num is 4(0100)or 3(0011)
								     Here anding with num done to get correct value if num is zero*/

}

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(isNumIsPowerOf_2(num))
	{
		printf("\nGiven number is power of 2");
	}
	else
	{
		printf("\nGiven number is not a power of 2");
	}

    return 10;
}
/*
Output:
---------------------------------------------------
test case 1
---------------------------------------------------
Enter the number : 5

Given number is not a power of 2
---------------------------------------------------
test case 2
---------------------------------------------------
Enter the number : 1

Given number is power of 2
---------------------------------------------------
test case 3
---------------------------------------------------
Enter the number : 32

Given number is power of 2
---------------------------------------------------
test case 3
---------------------------------------------------
Enter the number : 0

Given number is not a power of 2
---------------------------------------------------
*/
