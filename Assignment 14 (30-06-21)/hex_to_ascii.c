/*
Write  a program  to Convert Hex to  ASCII
*/
#include <stdio.h>

int main()
{
  int hexaNum, mask = 0xff, i_initValue = (sizeof (int) - 1) * 8, i, j = 0;

  printf ("Enter the hexa number which is less than or equal to 4 bytes\n");
  scanf ("%x", &hexaNum);
  char asciiNum[8];
  for (i = i_initValue, j = 0; i >= 0; i -= 8)
  {
      char tempAscii = ((hexaNum & (mask << i)) >> i);
      if (tempAscii != 0)
	  {
	    asciiNum[j] = tempAscii;
	    j++;
      }
  }
  asciiNum[j] = '\0';
  printf ("%s", asciiNum);

  return 0;
}
/*
Output:
Enter the hexa number which is less than or equal to 4 bytes
63616e   
Hexa number in ascii is : can
*/