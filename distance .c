#include <stdio.h>
#include <math.h>
void main()
{
    int X1, Y1, X2, Y2;
    printf("enter the value of X1,Y1:");
    scanf("%d%d", &X1, &Y1);
    printf("enter the value of X2,Y2:");
    scanf("%d%d", &X2, &Y2);
    int d1 = X2 - X1;
    int d2 = Y2 - Y1;
    double dist = sqrt((d1 * d1) * (d2 * d2));
    printf("the distance is %lf", dist);
}
