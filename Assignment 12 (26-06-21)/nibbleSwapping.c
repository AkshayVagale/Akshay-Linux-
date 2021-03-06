//Write a program to Swap the nibble in a byte without using bitwise operator.

typedef struct
{
	unsigned char loweByte:4;
	unsigned char upperByte:4;

}char_struct;

typedef union
{
	unsigned char oneByte;
	char_struct nibbleAccess;
}uniontype;

int main()
{
	unsigned char num, temp;
	printf("Enter the one byte number, in which nibbles as to be swapped\n");
	scanf("%d",&num);

	printf("Entered number is 0x%x:\n",num);
	uniontype unVar;
	unVar.oneByte = num;
	temp = unVar.nibbleAccess.loweByte;

	unVar.nibbleAccess.loweByte = unVar.nibbleAccess.upperByte;
	unVar.nibbleAccess.upperByte = temp;

	printf("After swapping the nibbles value is 0x%x:\n",unVar.oneByte);
    return 10;
}
/*
Output:

-------------------------------------------------------
Test case 1:
Enter the one byte number, in which nibbles as to be swapped
254
Entered number is 0xfe:
After swapping the nibbles value is 0xef:

Process returned 10 (0xA)   execution time : 8.071 s
Press any key to continue.

-------------------------------------------------------

Test case 2:
Enter the one byte number, in which nibbles as to be swapped
200
Entered number is 0xc8:
After swapping the nibbles value is 0x8c

*/
