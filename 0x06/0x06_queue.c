//0x06 queue
#include <stdio.h>
const int mx = 1000005;
int dat[mx];
int head = 0, tail = 0;

void push(int x)
{
    dat[tail] = x;
    tail++;
}
void pop()
{
    head++;
    return dat[head - 1];
}
int front()
{
    return dat[head];
}
int back()
{
    return dat[tail - 1];
}
int main()
{
    
}