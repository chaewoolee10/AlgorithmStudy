// 2576
#include <stdio.h>

int check(int *arr);

int main()
{
    int arr[7] = {};

    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (check(arr))
    {
        int min = 100;
        int sum = 0;
        
        for(int i = 0; i < 7; i++)
        {
            if(arr[i] % 2 != 0)
            {
                if(min > arr[i])
                {
                    min = arr[i];
                }
                sum += arr[i];
            }
        }
        
        printf("%d\n", sum);
        printf("%d", min);
    }
    else
    {
        printf("-1");
    }
}

int check(int *arr)
{
    int count = 0;

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    return count == 7 ? 0 : 1;
}