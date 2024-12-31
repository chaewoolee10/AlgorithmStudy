//2753
#include <stdio.h>

int leap(int n);

int main()
{
    int n; scanf("%d", &n);
    printf("%d", leap(n));
}

int leap(int n)
{
    if(n % 4 == 0)
    {
        if(n % 100 != 0 || n % 400 == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}