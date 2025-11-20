#include <stdio.h>
void main()
{
    int arr[5] = {45, 54, 65, 87, 89};
    int *p = arr;
    printf("%d\n", *p);
    printf("%d\n", *(p + 1));
}