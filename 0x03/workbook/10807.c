//10807
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int arr[100] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int v; scanf("%d", &v);
    int count = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == v)
        {
            count++;
        }    
    }
    printf("%d", count);
}
