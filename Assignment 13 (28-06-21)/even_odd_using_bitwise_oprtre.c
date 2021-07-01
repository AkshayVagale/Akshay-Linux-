// 2. Write a program with Macro to find given number is even or odd using bitwise operator.

#include<stdio.h>

/*If IS_NUMBER_ODD() gives 1 then given number is odd else even*/
#define IS_NUMBER_ODD(number) number & 1

int main()
{
	int num;
    printf("Enter the number : ");
    scanf("%d",&num);
	if(IS_NUMBER_ODD(num))
	{
		printf("Given number %d is odd number\n",num);
	}
	else
	{
		printf("Given number %d is even number\n",num);
	}
	return 10;
}
/*
Output:
---------------------------------------------------
test case 1
---------------------------------------------------
Enter the number : 5
Given number 5 is odd number
---------------------------------------------------
test case 2
---------------------------------------------------
Enter the number : 100
Given number 100 is even number
---------------------------------------------------
test case 3
---------------------------------------------------
Enter the number : 100001
Given number 100001 is odd number
---------------------------------------------------
test case 4
---------------------------------------------------
Enter the number : -32
Given number -32 is even number
---------------------------------------------------
*/
