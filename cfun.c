// write a c function which will accept three parameters l, b, h and returns volume of the cube
#include <stdio.h>
int cube(int l, int b, int h)
{
    int area = l * b * h;
    return area;
}
void main()
{
    int l = 56;
    int b = 54;
    int h = 56;
    printf("volume of the cube %d", cube(l, b, h));
}