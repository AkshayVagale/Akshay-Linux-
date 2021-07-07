// Write  a program  to Convert Text to Binary
#include <stdio.h>

unsigned char text[255] = {NULL};
unsigned char binary[255] = {NULL};
void charToBinary(void);

int main()
{
	printf("Enter the text\n");
	fgets(text, sizeof(text), stdin);
	charToBinary();
	printf("%s",binary);
	return 10;
}

void charToBinary(void)
{

	char ch,*textPtr = text,i,j=0,asciiBin[8];
	ch = *textPtr++;
	while( ch != '\0' && ch != '\n' )
	{
		for( i = 0 ; i < 8 ; i++ )
		{

			if( ch%2 == 1){
				asciiBin[i] = '1';
			}
			else
			{
				asciiBin[i] = '0';
			}
			ch /= 2;
		}
		for( i = 7 ; i >= 0 ; i-- )
		{
			binary[j++] = asciiBin[i];
		}
		binary[j++] = ' ';
		ch = *textPtr++;
	}
	binary[j] = '\0';
}

/*
Output:
----------------------------------------------------------------------------
Test case 1:
Enter the text
abcd efg
01100001 01100010 01100011 01100100 00100000 01100101 01100110 01100111
----------------------------------------------------------------------------
Test case 2:
Enter the text
1#(|
00110001 00100011 00101000 01111100
----------------------------------------------------------------------------
*/
