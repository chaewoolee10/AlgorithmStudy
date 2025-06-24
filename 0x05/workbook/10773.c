// 10773
#include <stdio.h>

int dat[1000000] = {};
int pos = 0;

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        if (a != 0)
        {
            dat[pos] = a;
            pos++;
        }
        else
        {
            if (pos != 0)
            {
                pos--;
            }
        }
        /*
        for (int j = 0; j < pos; j++)
        {
            printf("%d ", dat[j]);
        }
        printf("\n");
        */
    }
    int sum = 0;
    for (int i = 0; i < pos; i++)
    {
        sum += dat[i];
    }
    printf("%d", sum);
}