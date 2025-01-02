//2309
#include <stdio.h>

int indexcheck(int *arr);

int main()
{
    int arr[9] = {};
    
    for(int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
    }
    int index1 = 0;
    int index2 = 0;
    
    for(int i = 0; i < 8; i++)
    {
        int sum = 0;
        for(int j = i + 1; j < 9; j++)
        {
            sum = 0;
            for(int k = 0; k < 9; k++)
            {
                if(i != k && j != k)
                {
                    sum += arr[k];
                }
            }
            if(sum == 100)
            {
                index1 = i;
                index2 = j;
                break;
            }
        }
        if(sum == 100)
        {
            break;
        }
        
    }
    
    arr[index1] = 0;
    arr[index2] = 0;
    
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(arr[i] < arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for(int i = 0; i < 9; i++)
    {
        if(arr[i] != 0)
        {
            printf("%d\n", arr[i]);
        }
    }
 
}