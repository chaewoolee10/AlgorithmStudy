// 10093
#include <stdio.h>

int main()
{
    long long int a;
    scanf("%lld", &a);
    long long int b;
    scanf("%lld", &b);

    long long int max = a > b ? a : b;
    long long int min = a < b ? a : b;

    if (max == min)
    {
        printf("0");
    }
    else
    {
        printf("%lld\n", max - min - 1);

        for (long long int i = min + 1; i < max; i++)
        {
            printf("%lld ", i);
        }
    }
}