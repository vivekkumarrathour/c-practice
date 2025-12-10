// Write a program to find the power of a number without using ∗∗ operator or any inbuilt function.

#include <stdio.h>
#include <math.h>
int main()
{
    int x, y;
    int z;

    printf("Enter the base number and the exponent:\n");
    scanf("%d %d", &x, &y);

      z = x ;
    for (int i=0;i<y-1;i++)
    {
        z = z*x;
    }
    printf ("The result of %d^%d is %d",x,y,z);
    
}





