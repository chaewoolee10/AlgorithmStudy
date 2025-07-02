//2178
#include <stdio.h>

int board[100][100] = {};
int vis[100][100] = {};
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int bfsqueue_x[10005] = {};
int bfsqueue_y[10005] = {};
int head = 0;
int tail = 0;

void initialset(int n, int m);
void distance(int n, int m);

int main()
{
    int n; scanf("%d", &n);
    int m; scanf("%d", &m);
    initialset(n, m);
    
    vis[0][0] = 1; //시작지점
    bfsqueue_x[tail] = 0;
    bfsqueue_y[tail] = 0;
    tail++;
    int count = 0;
    while(tail - head != 0)
    {
        int cur_x = bfsqueue_x[head];
        int cur_y = bfsqueue_y[head];
        //printf("(%d %d) %d\n", cur_x, cur_y, vis[cur_y][cur_x]);
        
        if(cur_x == m - 1 && cur_y == n - 1)
        {
            printf("%d\n", vis[cur_y][cur_x]);
            break;
        }
        head++;
        
        for(int dir = 0; dir < 4; dir++)
        {
            int nx = cur_x + dx[dir];
            int ny = cur_y + dy[dir];
            
            if(nx < 0 || nx >= m || ny < 0 || ny >= n)
            {
                continue;
            }
            if(vis[ny][nx] >= 1 || board[ny][nx] == 0)
            {
                continue;
            }
            vis[ny][nx] = vis[cur_y][cur_x] + 1; //0,0 과의 거리
            bfsqueue_x[tail] = nx;
            bfsqueue_y[tail] = ny;
            tail++;
        }
        
    }
    //distance(n, m);
}

void initialset(int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        char str[106] = {}; scanf("%s", str);
        for(int j = 0; j < m; j++)
        {
            board[i][j] = str[j] - '0';
        }
    }
}

void distance(int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d ", vis[i][j]);
        }
        printf("\n");
    }
}