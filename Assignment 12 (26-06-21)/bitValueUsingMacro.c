//Write a program as a Macro will take two arguments. It should return the position 1 or 0.
#include<stdio.h>
#define BITE_VALUE(value,bitPosition) ((value & (1 << bitPosition)) != 0)

int main()
{
	char num;
	int pos;
	printf("Enter the number : ");
	scanf("%x",&num);
	printf("Enter the bit position : ");
    scanf("%x",&pos);

    if(pos >= 0 && pos <= 7){
        printf("Bit value of position %d is %d\n",pos,BITE_VALUE(num,pos));
    }
    else{
        printf("position is in out of range \n");
    }
    return 10;
}
/*
Output:

-------------------------------------------------------
Test case 1:
Enter the number : 7
Enter the bit position : 3
Bit value of position 3 is 0

-------------------------------------------------------
Test case 2:
Enter the number : 7
Enter the bit position : 0
Bit value of position 0 is 1
-------------------------------------------------------
Test case 3:
Enter the number : 8
Enter the bit position : 3
Bit value of position 3 is 1
-------------------------------------------------------
Test case 4:
Enter the number : 8
Enter the bit position : 2
Bit value of position 2 is 0

*/
