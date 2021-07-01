//4. Do exclusive OR for 20,20,40,40,13,13,11,88,88,98,99,11,11 Manually.

#include <stdio.h>

// Function to find element occurring
// odd number of times
// this function works only for the number sequence which as
// only one element which is repeated oddly

int getOddOccurrence(int ar[], int ar_size)
{
    int res = 0;
    for (int i = 0; i < ar_size; i++)
    {
        res = res ^ ar[i];
    }

    return res;
}

/* Driver function to test above function */
int main()
{
    int ar[] = {20,20,40,40,13,13,11,88,88,98,98,11,11};
    int n = sizeof(ar) / sizeof(ar[0]);

    // Function calling
    printf("%d", getOddOccurrence(ar, n));
    return 0;
}
/*
output:
11
*/