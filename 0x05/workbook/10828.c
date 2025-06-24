//10828
#include <stdio.h>
#include <string.h>

int dat[100000] = {};
int pos = 0;

void commandcheck(char *str);

int main()
{
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        char command[6] = {}; scanf("%s", command);
        getchar();
        commandcheck(command);
    }
}
void commandcheck(char *str)
{
    if(!strcmp(str, "push"))
    {
        int x; scanf("%d", &x);
        getchar();
        dat[pos] = x;
        pos++;
    }
    else if(!strcmp(str, "top"))
    {
        if(pos == 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", dat[pos - 1]);
        }   
    }
    else if(!strcmp(str, "size"))
    {
        printf("%d\n", pos);
    }
    else if(!strcmp(str, "empty"))
    {
        pos == 0 ? printf("1\n") : printf("0\n");
    }
    else if(!strcmp(str, "pop"))
    {
        if(pos == 0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", dat[pos - 1]);
            pos--;
        }
    }
}