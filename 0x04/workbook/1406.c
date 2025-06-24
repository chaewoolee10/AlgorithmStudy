// 1406
#include <stdio.h>
#include <string.h>

const int mx = 600005;
int pre[mx], nxt[mx];

char dat[mx] = {};
int unused;
int addr;
void initialset()
{
    for (int i = 0; i < mx; i++)
    {
        pre[i] = -1;
        nxt[i] = -1;
    }
}

void commandcheck(char command, char *add_c);
void print_dat();
int main()
{
    initialset();
    char str[100000] = {}; scanf("%s", str);
    getchar();
    int n; scanf("%d", &n);
    getchar();
    int length = strlen(str);
    addr = length;
    unused = length + 1;
    for(int i = 0; i < length; i++)
    {
        dat[i + 1] = str[i]; //dummy node와 맞추기 위해 1번부터 저장, 0번은 dummy node
    }
    
    for (int i = 0; i <= length; i++)
    {
        pre[i] = i - 1;
        nxt[i] = i + 1;
    }
    nxt[length] = -1;
    pre[0] = -1;
    
    for (int i = 0; i < n; i++)
    {
        char command = 0; scanf("%c", &command);
        getchar();
        char add_c[2] = {};
        if(command == 'P')
        {
            scanf("%s", add_c);
            getchar();
        }
        commandcheck(command, add_c);
    }
    print_dat();
}

void commandcheck(char command, char *add_c)
{
    switch (command)
    {
    case 'P':
        dat[unused] = add_c[0]; //strcat -> dat의 맨 뒤에 저장 => 시간 절약
        pre[unused] = addr;
        if(nxt[addr] == -1)
        {
            nxt[unused] = -1;
            nxt[addr] = unused;
        }
        else
        {
            nxt[unused] = nxt[addr];
            pre[nxt[addr]] = unused;
            nxt[addr] = unused;
        }
        pre[unused] = addr;
        unused++;
        addr = nxt[addr]; //다음 노드로 이동
        
        break;
    case 'L':
        if (pre[addr] != -1)
        {
            addr = pre[addr]; //전 노드로 이동
        }
        break;
    case 'D':
        if (nxt[addr] != -1)
        {
            addr = nxt[addr]; //다음 노드로 이동
        }
        break;
    case 'B':
        if(pre[addr] != -1)
        {
            nxt[pre[addr]] = nxt[addr];
            pre[nxt[addr]] = pre[addr];
            addr = pre[addr]; //전 노드로 이동
        }
        break;
    }
}
void print_dat()
{
    int cur = 0;
    /*
    int length = strlen(dat);
    for(int i = 0; i <= length; i++)
    {
        printf("%d ", nxt[i]);
    }
    printf("\n");
    for(int i = 0; i <= length; i++)
    {
        printf("%d ", pre[i]);
    }
    printf("\n");
    */
    while(nxt[cur] != -1)
    {
        cur = nxt[cur];
        printf("%c", dat[cur]);
        
    }
}