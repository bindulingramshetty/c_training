#include <stdio.h>
#include <stdlib.h>
int subarr(int arr[], int n)
{
    int sub = arr[0] - arr[n - 1];
    return abs(sub);
}
void main()
{
    int arr[5] = {40, 65, 76, 54, 32};
    int n = 5;
    printf("%d", subarr(arr, n));
}