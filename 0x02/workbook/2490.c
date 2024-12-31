// 2490
#include <stdio.h>

void check(int zero, int one);

int main()
{
    int a = 0;
    int zerocount = 0;
    int onecount = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &a);
            a == 0 ? zerocount++ : onecount++;   
        }
        check(zerocount, onecount);
        zerocount = 0;
        onecount = 0;
    }
}

void check(int zero, int one)
{
    if(one == 3 && zero == 1)
    {
        printf("A\n");
    }
    if(one == 2 && zero == 2)
    {
        printf("B\n");
    }
    if(one == 1 && zero == 3)
    {
        printf("C\n");
    }
    if(one == 0 && zero == 4)
    {
        printf("D\n");
    }
    if(one == 4 && zero == 0)
    {
        printf("E\n");
    }
}