// 1697
#include <stdio.h>

int board[100005] = {};
int vis[100005] = {};

int dx[3] = {-1, 1, 2};

int bfsqueue[1000000] = {};
int head = 0;
int tail = 0;

int main()
{
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);
    for (int i = 0; i < 100001; i++)
    {
        vis[i] = -1;
    }

    board[m] = 1;
    vis[n] = 0;
    bfsqueue[tail] = n;
    tail++;

    while (tail - head != 0)
    {
        int cur = bfsqueue[head];
        head++;
        if (board[cur] == 1)
        {
            // printf("arrived!\n");
            printf("%d\n", vis[cur]);
            break;
        }
        for (int dir = 0; dir < 3; dir++)
        {
            int nx;
            if (dir != 2)
            {
                nx = cur + dx[dir];
            }
            else
            {
                nx = cur * dx[dir];
            }

            if (nx < 0 || nx > 100000)
            {
                continue;
            }
            if (vis[nx] != -1) 
            {//이미 방문한 적이 있으면 넘김 시작위치 포함
                continue;
            }
            vis[nx] = vis[cur] + 1;
            bfsqueue[tail] = nx;
            tail++;
        }
    }
    /*
    for (int i = 0; i < 30; i++)
    {
        printf("%d ", vis[i]);
    }*/
}