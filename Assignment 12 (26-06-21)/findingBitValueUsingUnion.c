//Write a program to print bits in the character byte without using bitwise operator. (Hint: Use Union & Bit fields)
#include<stdio.h>

typedef struct
{
	unsigned char b0:1;
	unsigned char b1:1;
	unsigned char b2:1;
	unsigned char b3:1;
	unsigned char b4:1;
	unsigned char b5:1;
	unsigned char b6:1;
	unsigned char b7:1;
}char_struct;

typedef union
{
	unsigned char oneByte;
	char_struct bitAccess;
}uniontype;

int main()
{
	unsigned char num;
	printf("Enter the one byte number\n");
	scanf("%d",&num);
	uniontype unVar;
	unVar.oneByte = num;
	printf("Entered number as following bit values:\n");
    printf("b0 = %d\n",unVar.bitAccess.b0);
	printf("b1 = %d\n",unVar.bitAccess.b1);
	printf("b2 = %d\n",unVar.bitAccess.b2);
	printf("b3 = %d\n",unVar.bitAccess.b3);
	printf("b4 = %d\n",unVar.bitAccess.b4);
	printf("b5 = %d\n",unVar.bitAccess.b5);
	printf("b6 = %d\n",unVar.bitAccess.b6);
	printf("b7 = %d\n",unVar.bitAccess.b7);
    return 10;
}
/*
Output:

-------------------------------------------------------
Test case 1:
Enter the one byte number
7
Entered number as following bit values:
b0 = 1
b1 = 1
b2 = 1
b3 = 0
b4 = 0
b5 = 0
b6 = 0
b7 = 0
-------------------------------------------------------

Test case 2:
Enter the one byte number
255
Entered number as following bit values:
b0 = 1
b1 = 1
b2 = 1
b3 = 1
b4 = 1
b5 = 1
b6 = 1
b7 = 1

*/