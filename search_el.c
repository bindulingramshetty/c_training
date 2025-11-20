#include <stdio.h>
int search(int arr[], int key, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return 1;
    }
    return 0;
}
void main()
{
    int arr[7] = {
        54,
        76,
        89,
        78,
        56,
        23,
        14,
    };
    int n = 7;
    int key;
    printf(" what are u searching for : ");
    scanf("%d", &key);
    printf("%d", search(arr, key, n));
}
