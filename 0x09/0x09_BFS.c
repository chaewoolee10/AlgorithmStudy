//0x09 BFS
/*   구현
1. 시작하는 칸을 큐에 삽입하고 방문했다는 표시를 남김
2. 큐에서 원소를 꺼내어 상하좌우로 인접한 칸에 대해 3번 수행
3. 해당 칸을 이전에 방문했다면 넘김, 처음으로 방문했다면
   방운했다는 표시를 남기고 해당 칸을 큐에 삽입
4. 큐가 빌 때까지 2번 반복
*/
#include <stdio.h>

int board[502][502] = {{1,0,0},{1,1,1},{1,0,1}}; //판
//예시
/*
    1 0 0
    1 1 1
    1 0 1
*/
int vis[502][502] = {}; //방문했다는 표시를 남기는 배열
int n = 3, m = 3; //행, 열
int dx[4] = {1,0,-1,0}; //좌우를 접근하는 배열
int dy[4] = {0,1,0,-1}; //상하를 접근하는 배열ㄹㅇㄹㅇㄹ

int dat_queue[2][500] = {};
int head = 0;
int tail = 0;

int main()
{
    vis[0][0] = 1; // 처음 주소 삽입
    dat_queue[0][tail] = 0; //처음 주소를 큐에 저장
    dat_queue[1][tail] = 0;
    tail++;
    
    while (tail - head != 0)
    {
        int cur_x = dat_queue[0][head];
        int cur_y = dat_queue[1][head];
        head++;
        printf("(%d %d) - >",cur_x, cur_y);
        for(int dir = 0; dir < 4; dir++)
        {
            int nx = cur_x + dx[dir]; //현재 주소의 좌우 확인
            int ny = cur_y + dy[dir]; //현재 주소의 상하 확인
            
            if(nx < 0 || nx >= n || ny < 0 || ny >= m)
            {//범위를 벗어난 경우
                continue;
            }
            if(vis[nx][ny] == 1 || board[nx][ny] != 1)
            { //이미 방문했거나 방문하려는 주소가 아닌 경우
                continue;
            }
            vis[nx][ny] = 1; //방문했다는 표시 남김
            dat_queue[0][tail] = nx; //큐에 삽입
            dat_queue[1][tail] = ny;
            tail++;
        }
        
    }
    
}