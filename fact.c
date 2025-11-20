#include <stdio.h>
void main()
{
    int result = 1;
    int n;
    printf("enter the n:");
    scanf("%d", &n);
    for (int i = 1; i <= 5; i++)
    {
        result = result * i;
    }
    printf("prod is %d", result);
}