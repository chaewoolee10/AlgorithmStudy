// 2164
#include <stdio.h>
const int mx = 1000005;
int dat[mx] = {};
int head = 0, tail = 0;

void initialset(int n);
int queue_func();

int main()
{
    int n;
    scanf("%d", &n);
    if(n == 1)
    {
        printf("1");
        return 0;
    }
    initialset(n);
    int a = queue_func();
    printf("%d", a);
}
void initialset(int n)
{
    for (int i = 0; i < n; i++)
    {
        dat[i] = i + 1;
        tail++;
    }
}
int queue_func()
{
    while (1)
    {
        head++;
        if(head == tail - 1)
        {
            return dat[head];
        }
        dat[tail] = dat[head];
        head++;
        tail++;
    }
}