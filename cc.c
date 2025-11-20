// write a function which will accept two input parameters x,y and returns x^2 + y^2
#include <stdio.h>
int sqer(int x, int y)
{
    int sum = (x * x) + (y * y);
    return sum;
}
void main()
{
    int x = 8;
    int y = 10;
    printf("%d", sqer(x, y));
}
