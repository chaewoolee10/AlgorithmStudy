// 1158
#include <stdio.h>

int dat[5005] = {};
int nxt[5005] = {};
int pre[5005] = {};
int res[5005] = {};

void initialset(int n);

int main()
{
    int n;
    scanf("%d", &n);
    int k;
    scanf("%d", &k);
    initialset(n);
    int j = 0;
    int addr = 1;
    int count = n;
    while (1)
    {
        if (count == 0)
        {
            break;
        }
        for (int i = 0; i < k - 1; i++)
        {
            addr = nxt[addr];
        }
        res[j] = dat[addr];
        pre[nxt[addr]] = pre[addr];
        nxt[pre[addr]] = nxt[addr];
        /*
        for(int i = 1; i <= n; i++)
        {
            printf("%d ", nxt[i]);
        }
        printf("\n");
        for(int i = 1; i <= n; i++)
        {
            printf("%d ", pre[i]);
        }
        printf("\n");
        
        */
        j++;
        count--;
        addr = nxt[addr];
        
    }
    if (n == 1)
    {
        printf("<1>");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                printf("<%d, ", res[i]);
            }
            else if (i == n - 1)
            {
                printf("%d>", res[i]);
            }
            else
            {
                printf("%d, ", res[i]);
            }
        }
    }
}
void initialset(int n)
{
    for (int i = 1; i <= n; i++)
    {
        dat[i] = i;
        nxt[i] = i + 1;
        pre[i] = i - 1;
    }
    nxt[n] = 1;
    pre[1] = n;
}
