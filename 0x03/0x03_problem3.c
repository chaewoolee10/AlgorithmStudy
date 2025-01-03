//0x01 문제2 O(N) 풀이
#include <stdio.h>

int func2(int *arr, int n);

int main()
{
    int n; scanf("%d", &n);
    int arr[1000] = {};
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", func2(arr, n));
}

int func2(int *arr, int n)
{
    //숫자가 등장했는지 아닌지를 체크하는 배열을 하나 더 만들기
    //배열에 하나씩 돌아가면서(N) 
    //100을 만들 수 있는 수가 등장했었는지 확인(인덱스가 0인지 1인지만 확인하면 O(1)임)
    //배열의 인덱스를 하나씩 체크할때마다 체크배열의 인덱스 값 증가
    int check[100] = {};
    for(int i = 0; i < n; i++) //시간복잡도 O(N)
    {
        if(!check[100 - arr[i] - 1])
        {
            check[arr[i] - 1] = 1;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}