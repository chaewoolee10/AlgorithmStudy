// 3273
#include <stdio.h>

int arr[100000] = {};
int checker[2000001] = {};

int main()
{
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        checker[arr[i]]++;
    }
    
    int num = 0;
    scanf("%d", &num);
    int count = 0;

    for (int i = 0; i < n; i++)
    {   
        if(num - arr[i] < 0)
        {
            continue;
        }
        if(checker[num - arr[i]] == 1)
        {
            count++;
        }
    }
    printf("%d", count / 2);
}