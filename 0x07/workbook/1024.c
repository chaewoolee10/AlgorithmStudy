//1024
#include <stdio.h>

const int mx = 100;

int deque_func(int *dat, int n, int l);
void print_func();

int main()
{
    int n; scanf("%d", &n);
    int l; scanf("%d", &l);
    
    int check = 0;
    for(int i = l; i <= 101; i++)
    {
        int dat[2 * mx + 5] = {};
        check = deque_func(dat, n, i);
        if(check == 0)
        {
            
        }
    }
}
int deque_func(int *dat, int n, int l)
{
    int head = mx, tail = mx;
    int sum = 0;
    dat[head] = n / l;
    for(int i = 0; i < l; i++)
    {
        
    }
}

void print_func()
{

}