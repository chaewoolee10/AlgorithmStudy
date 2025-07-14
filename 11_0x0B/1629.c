//1629
#include <stdio.h>

typedef long long int lld;

lld res = 1;
lld recur_power(lld a, lld b, lld m);

int main()
{
    lld a; scanf("%lld", &a);
    lld b; scanf("%lld", &b);
    lld m; scanf("%lld", &m);
    recur_power(a, b, m);
    printf("%lld", res);
    
}
lld recur_power(lld a, lld b, lld m)
{
    if(b == 0)
    {
        return res % m;
    }
    else
    {
        res = recur_power(a, b / 2, m);
        res = res * res % m;
        return res * a % m;
    }
}