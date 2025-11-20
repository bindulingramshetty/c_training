#include <stdio.h>
void main()
{
    int age;
    float h;
    printf("enter the age:");
    scanf("%d", &age);
    printf("enter the hight:");
    scanf("%f", &h);
    if ((age > 12) && (h > 4.5)) // 13>12 ? T and 5>4.5 ? T == > T
    {
        printf("you can run the roller coaster!");
    }
    else
    {
        printf("grow up and come back!");
    }
}
