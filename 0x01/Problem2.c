//문제2
//길이 N 배열에서 합이 100인 서로 다른 두 원소가 존재하면 1, 아니면 0 반환
#include <stdio.h>

int func2(int *arr, int n);

int main()
{
    int arr[1000] = {};
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)    
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", func2(arr, n));
}

int func2(int *arr, int n)
{
    int flag = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++) //시간복잡도 : O(N^2)
        {
            if(arr[i] + arr[j] == 100)
            {
                flag = 1;
            }
        } 
    }
    return flag;
}
//O(N) 풀이 존재