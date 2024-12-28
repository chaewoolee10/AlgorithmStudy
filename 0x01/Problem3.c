//문제3
//N이 제곱수이면 1, 아니면 0 반환
#include <stdio.h>
#include <math.h>

int func3(int n);

int main()
{
    int n; scanf("%d", &n);
    printf("%d", func3(n));
}

int func3(int n)
{
    if(pow(n, 0.5) - (int)(pow(n, 0.5)) != 0) //시간복잡도 O(1)
    {
        return 0;
    }
    return 1;
    
}
/*

int func3(int n)
{
    for(int i = 0; i * i < n; i++) // 시간복잡도 O(N^1/2)
    {
        if(i * i == n)
        {
            return 1;
        }
    }
    return 0;
}

O(logN) 풀이 존재
*/