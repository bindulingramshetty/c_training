#include <stdio.h>
int addarr(int arr[], int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result = result + arr[i];
    }

    return result;
}
void main()
{
    int arr[5] = {65, 34, 35};
    int n = 5;
    printf("result is %d", (arr, n));
}
