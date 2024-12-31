//9498
#include <stdio.h>

void grade(int n);

int main()
{
    int n; scanf("%d", &n);
    grade(n);
}

void grade(int n)
{
    if(n >= 90)
    {
        printf("A");
    }
    else if(n >= 80)
    {
        printf("B");
    }
    else if(n >= 70)
    {
        printf("C");
    }
    else if(n >= 60)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
}