//0x0B power 함수 구현
//a^b 을 m으로 나눈 나머지
#include <stdio.h>

int recur_power(int a, int b, int m);
long long int result = 1;

int main()
{
    int a; scanf("%d", &a);
    int b; scanf("%d", &b);
    int m; scanf("%d", &m);
    recur_power(a, b, m);
    printf("%lld", result);
}
int recur_power(int a, int b, int m)
{
    if(b == 0)
    {
        return result % m; //overflow -> 각각 연산마다 m으로 나누기
    }
    else
    {
        result *= a;
        result %= m;
        return recur_power(a, b - 1, m);
    }
}