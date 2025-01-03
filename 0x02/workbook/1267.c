//1267
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    
    int y = 0;
    int m = 0;
    
    for(int i = 0; i < n; i++)
    {
        int a; scanf("%d", &a);
        
        y += (a / 30 + 1) * 10;
        m += (a / 60 + 1) * 15;
        
    }
    if(y == m)
    {
        printf("Y M %d", y);
    }
    else
    {
        y < m ? printf("Y %d", y) : printf("M %d", m);    
    }
    
    
}