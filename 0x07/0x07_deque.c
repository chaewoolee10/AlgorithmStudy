//0x07 deque
#include <stdio.h>

const int mx = 100005;
int dat[2*mx + 1];
int head = mx, tail = mx;

int main()
{
    
}
void push_front(int x)
{
    head--;
    dat[head] = x;
}
void push_back(int x)
{
    dat[tail] = x;
    tail++;
}
void pop_front()
{
    head++;
}
void pop_back()
{
    tail--;
}
int front()
{
    return dat[head];
}
void back()
{
    return dat[tail - 1];
}
