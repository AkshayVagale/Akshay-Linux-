//Write a program to CLEAR, SET, TOGGLE with bitwise operator using Macro.
#include<stdio.h>
#define BITE_SET(number,position) (number | (1 << position))
#define BITE_CLEAR(number,position) (number & (~(1 << position)))
#define BITE_TOGGLE(number,position) (number ^ (1 << position))

int main()
{
	unsigned char num;
	int pos;
	printf("Enter the number : ");
	scanf("%x",&num);

	printf("Enter the bit position in given number %d to set that bit: ",num);
    scanf("%d",&pos);
    if(pos >= 0 && pos <= 31){
        printf("After setting the bit : %d\n",BITE_SET(num,pos));
    }
    else{
        printf("position is in out of range \n");
    }

	printf("Enter the bit position in given number %d to clear that bit: ",num);
    scanf("%d",&pos);
	if(pos >= 0 && pos <= 31){
        printf("After clearing the bit : %d\n",BITE_CLEAR(num,pos));
    }
    else{
        printf("position is in out of range \n");
    }

	printf("Enter the bit position in given number %d to toggle that bit: ",num);
    scanf("%d",&pos);
	if(pos >= 0 && pos <= 31){
        printf("After toggling the bit  %d\n",BITE_TOGGLE(num,pos));
    }
    else{
        printf("position is in out of range \n");
    }
    return 10;
}
/*
Output:

--------------------------------------------------------------
Test case 1:
Enter the number : 8
Enter the bit position in given number 8 to set that bit: 1
After setting the bit : 10
Enter the bit position in given number 8 to clear that bit: 3
After clearing the bit : 0
Enter the bit position in given number 8 to toggle that bit: 2
After toggling the bit  12

---------------------------------------------------------------
Test case 2:
Enter the number : 3
Enter the bit position in given number 3 to set that bit: 2
After setting the bit : 7
Enter the bit position in given number 3 to clear that bit: 0
After clearing the bit : 2
Enter the bit position in given number 3 to toggle that bit: 1
After toggling the bit  1

*/

