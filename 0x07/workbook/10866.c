// 10866
#include <stdio.h>
#include <string.h>

const int mx = 10005;

int dat[2 * mx + 1];
int head = mx;
int tail = mx;

void deque_func(char *command, int a);

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char command[11] = {};
        scanf("%s", command);
        int a = 0;
        if (!strcmp(command, "push_front") || !strcmp(command, "push_back"))
        {
            scanf("%d", &a);
        }
        deque_func(command, a);
    }
}

void deque_func(char *command, int a)
{
    if (!strcmp(command, "push_front"))
    {
        head--;
        dat[head] = a;
    }
    else if (!strcmp(command, "push_back"))
    {
        dat[tail] = a;
        tail++;
    }
    else if (!strcmp(command, "pop_front"))
    {
        if (head == tail)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", dat[head]);
            head++;
        }
    }
    else if (!strcmp(command, "pop_back"))
    {
        if (head == tail)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", dat[tail - 1]);
            tail--;
        }
    }
    else if (!strcmp(command, "size"))
    {
        printf("%d\n", tail - head);
    }
    else if (!strcmp(command, "empty"))
    {
        head == tail ? printf("1\n") : printf("0\n");
    }
    else if (!strcmp(command, "front"))
    {
        if(head == tail)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", dat[head]);
        }
    }
    else if (!strcmp(command, "back"))
    {
        if(head == tail)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", dat[tail - 1]);
        }
    }
}