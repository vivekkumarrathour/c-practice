//Find the largest number among the three numbers.
#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    printf("Enter three numbers:");
    scanf("%d %d %d", &x, &y, &z);
    if (x >= y && x >= z)
    {
        printf("%d is the largest number.", x);
    }
    else if (y >= x && y >= z)
    {
        printf("%d is the largest number.", y);
    }
    else
    {
        printf("%d is the largest number.", z);
    }
    return 0;
}



