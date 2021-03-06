/*
1. Find the second largest number in the array
*/
#include<stdio.h>
#define ARRAY_SIZE 5

int main()
{
   int numList[ARRAY_SIZE];
   int i=0,firstLargest,secondLargest = 0;
   printf("Enter the %d array element\n",ARRAY_SIZE);
   for(i=0;i<ARRAY_SIZE;i++)
   {
       scanf("%d",&numList[i]);
   }
   firstLargest=numList[0];
   for(i=1;i<ARRAY_SIZE;i++)
   {
       if( numList[i] > firstLargest ){
            firstLargest=numList[i];
       }
   }
   for(i=0;i<ARRAY_SIZE;i++)
   {
	   if( numList[i] > secondLargest && numList[i] < firstLargest){
            secondLargest = numList[i];
       }
   }
   printf("Second largest number is : %d",secondLargest);
}
/*
Output:
------------------------------------
Test case 1:

Enter the 5 array element
5
6
1
3
2
Second largest number is : 5

------------------------------------
Test case 2:

Enter the 5 array element
-5
98
33
55
2
Second largest number is : 55

------------------------------------
Test case 3:

Enter the 5 array element
-5
-1
-9
-7
-8
Second largest number is : -5
------------------------------------
*/
