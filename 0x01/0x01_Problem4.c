//문제4
//N 이하 수 중에서 가장 큰 2의 거듭제곱 수 반환
#include <stdio.h>

int func4(int n);

int main()
{
    int n; scanf("%d", &n);
    printf("%d", func4(n));
}

int func4(int n)
{
    int a = 1;
    while(1) //시간복잡도 O(logN)
    {
        if(a * 2 > n)
        {
            return a;
        }
        else
        {
            a *= 2;
        }
    }
    
}