//2480
#include <stdio.h>

int prize(int *arr);

int main()
{
    int arr[3] = {};
    
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", prize(arr));
}

int prize(int *arr)
{
    int dup = 0;
    
    if(arr[0] == arr[1] && arr[0] == arr[2])
    {
        return 10000 + arr[0] * 1000;
    }
    else
    {
        if(arr[0] == arr[1] || arr[0] == arr[2])
        {
            dup = arr[0];
        }
        else if(arr[1] == arr[2])
        {
            dup = arr[1];   
        }
        else
        {
            for(int i = 0; i < 3; i++)
            {
                if(dup < arr[i])
                {
                    dup = arr[i];
                }
            }
            return dup * 100;
        }
        return 1000 + dup * 100;
    }
    
}