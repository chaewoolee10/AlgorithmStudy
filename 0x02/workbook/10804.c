// 10804
#include <stdio.h>

int main()
{
    int arr[20] = {};
    int arr1[20] = {};

    for (int i = 0; i < 20; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        int a; scanf("%d", &a);
        int b; scanf("%d", &b);

        for (int j = a - 1; j < b; j++)
        {
            arr1[j] = arr[b + a - j - 2];
        }
        for (int j = a - 1; j < b; j++)
        {
            arr[j] = arr1[j];
        }
    }
    for (int k = 0; k < 20; k++)
    {
        printf("%d ", arr[k]);
    }
}