// 0x04 traversefunction
#include <stdio.h>

const int mx = 1000005;
int dat[mx], pre[mx], nxt[mx];
int unused = 6;

void traverse_func();
void insert_func(int addr, int num);
void erase_func(int addr);

int main()
{

    for (int i = 0; i < mx; i++)
    {
        pre[i] = -1;
        nxt[i] = -1;
    }
    dat[1] = 65;
    dat[2] = 13;
    dat[4] = 21;
    dat[5] = 17;
    
    pre[0] = -1;
    pre[1] = 2;
    pre[2] = 0;
    pre[4] = 1;
    pre[5] = 4;
    
    nxt[0] = 2;
    nxt[1] = 4;
    nxt[2] = 1;
    nxt[4] = 5;
    nxt[5] = -1;
    traverse_func();
    insert_func(1, 30); //65 뒤 30을 넣는 경우 insert(1, 30)
    printf("\n");
    traverse_func();
    erase_func(1); //1번지 값 삭제
    printf("\n");
    traverse_func();
}
void insert_func(int addr, int num)
{
    dat[unused] = num; //unused 자리에 새로운 원소 추가
    nxt[unused] = nxt[addr]; //새로운 원소가 가르키는 다음 주소를 다음 주소로
    pre[unused] = addr; 
    nxt[addr] = unused;
    if(nxt[addr] != -1) pre[nxt[unused]] = unused; //삽입할 자리 다음 원소의 pre를 unused로 변경
    unused++;
}

void traverse_func()
{
    int cur_addr = 0;
    while(cur_addr != -1)
    {
        cur_addr = nxt[cur_addr];
        printf("%d %d\n", dat[cur_addr], cur_addr);
    }
}

void erase_func(int addr)
{
    nxt[pre[addr]] = nxt[addr];
    if(nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
    
}
