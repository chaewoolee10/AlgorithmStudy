//0x05 stack

#include <stdio.h>

const int mx = 1000005;
int dat[mx];
int pos = 0;

int main()
{
    
}
void push(int x)
{
    dat[pos] = x;
    pos++;
}
void pop()
{
    if(pos != 0)
    {
        pos--;
    }
}
int top()
{
    return dat[pos - 1]; 
}