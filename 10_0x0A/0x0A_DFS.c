//0x0A DFS
#include <stdio.h>
int n = 3, m = 3; //행, 열
int board[502][502] = {{1,0,0},{1,1,1},{1,0,1}}; //판
//예시
/*
    1 0 0
    1 1 1
    1 0 1
*/
int vis[503][503] = {};

int dx[4] = {-1.0,1,0};
int dy[4] = {0.-1,0,1};

int dfsstack_x[25000] = {};
int dfsstack_y[25000] = {};
int tail = 0;

int main()
{
    vis[0][0] = 1;
    dfsstack_x[0] = 0;
    dfsstack_y[0] = 0;
    tail++;
    
    while(tail != 0)
    {
        int cur_x = dfsstack_x[tail - 1];
        int cur_y = dfsstack_y[tail - 1];
        tail--;
        
        printf("%d %d\n", cur_x, cur_y);
        
        for(int dir = 0; dir < 4; dir++)
        {
            int nx = cur_x + dx[dir];
            int ny = cur_y + dy[dir];
            
            if(nx >= m || ny >= n || nx < 0 || ny < 0)
            {
                continue;
            }
            if(vis[ny][nx] == 1 || board[ny][nx] != 1)
            {
                continue;
            }
            vis[ny][nx] = 1;
            dfsstack_x[tail] = nx;
            dfsstack_y[tail] = ny;
            tail++;
        }
    }
}