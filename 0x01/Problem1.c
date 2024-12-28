//문제1
//N이하 자연수 중 3의 배수 또는 5의 배수인 수를 모두 합한 값을 반환하는 함수 작성

#include <stdio.h>

long long int func1(int n);

int main()
{
    int n; scanf("%d", &n);
    printf("%lld", func1(n));
}

long long int func1(int n)
{
    long long int sum = 0;
    for(int i = 1; i <= n; i++) //시간복잡도 : O(N)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    return sum;
}
//O(1) 로 짤 수 있는 방법 존재
