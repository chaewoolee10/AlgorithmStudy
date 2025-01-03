//2562
#include <stdio.h>

int main()
{
    int arr[9] = {};
    int max = 0;
    int maxindex = 0;
    
    for(int i = 0; i < 9; i++)
    {
        int a; scanf("%d", &arr[i]);    
        if(max < arr[i])
        {
            max = arr[i];
            maxindex = i;
        }
    }
    printf("%d\n%d",max,maxindex + 1);
}