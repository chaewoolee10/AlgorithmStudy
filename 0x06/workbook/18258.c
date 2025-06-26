// 18258
#include <stdio.h>
#include <string.h>

const int mx = 2000005;
int dat[mx] = {};
int head = 0, tail = 0;

void queue_func(char *command, int a);

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char command[6] = {};
        scanf("%s", command);
        int a = 0;
        if (!strcmp(command, "push"))
        {
            scanf("%d", &a);
        }
        queue_func(command, a);
    }
}

void queue_func(char *command, int a)
{
    if (!strcmp(command, "push"))
    {
        dat[tail] = a;
        tail++;
    }
    else if (!strcmp(command, "pop"))
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
    else if (!strcmp(command, "size"))
    {
        printf("%d\n", tail - head);
    }
    else if (!strcmp(command, "empty"))
    {
        if (head == tail)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
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