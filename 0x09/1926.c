//1926
#include <stdio.h>

int board[505][505] = {};
int vis[505][505] = {};
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

//bfs 큐
int bfsqueue[2][300000] = {};
int head = 0;
int tail = 0;

//void visprint(int n, int m);
void board_initialset(int n, int m);
int main()
{
    int n; scanf("%d", &n); //세로
    int m; scanf("%d", &m); //가로
    board_initialset(n, m);
    int count = 0;
    int max_size = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(vis[i][j] != 1 && board[i][j] == 1)
            {
                //printf("initial = (%d %d)\n", j, i);
                vis[i][j] = 1;
                bfsqueue[0][tail] = j;
                bfsqueue[1][tail] = i;
                tail++;
                
                int size = 0;
                while(tail - head != 0)
                {
                    int cur_x = bfsqueue[0][head];
                    int cur_y = bfsqueue[1][head];
                    head++;
                    //printf("(%d %d)->",cur_x, cur_y);
                    for(int dir = 0; dir < 4; dir++)
                    {
                        int nx = cur_x + dx[dir];
                        int ny = cur_y + dy[dir];
                        
                        if(nx < 0 || nx >= m || ny < 0 || ny >= n)
                        {
                            continue;
                        }
                        if(vis[ny][nx] == 1 || board[ny][nx] != 1)
                        {
                            continue;
                        }
                        vis[ny][nx] = 1;
                        bfsqueue[0][tail] = nx;
                        bfsqueue[1][tail] = ny;
                        tail++;
                    }
                    size++;
                }
                //visprint(n, m);
                count++;
                if(size > max_size)
                {
                    max_size = size;
                }
            }
        }
    }
    printf("%d\n%d",count, max_size);
    
}

void board_initialset(int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &board[i][j]);
        }
    }
}
/*
void visprint(int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d ", vis[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}*/
