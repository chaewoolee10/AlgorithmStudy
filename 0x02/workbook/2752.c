//2752
#include <stdio.h>

int main()
{
    int arr[3] = {};
    
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 1; i <= 1000000; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i == arr[j])
            {
                printf("%d ", i);
            }
        }
        
    }
}