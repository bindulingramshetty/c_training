// write a c function which will accept one input parameter or and returns the perimeter of circle,declare pi as a constant!
#include <stdio.h>
float peri(int r)
{
    const float pi = 3.14;
    float peri = 2 * pi * r;
    return peri;
}
void main()
{
    float r = 6;
    printf("%f", peri(r));
}
