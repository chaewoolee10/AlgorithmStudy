//2577
#include <stdio.h>

int main()
{
    int mul = 1;
    int numarr[10] = {};
    
    for(int i = 0; i < 3; i++)
    {
        int a = 0; scanf("%d", &a);    
        mul *= a;
    }
    
    while(1)
    {
        if(mul == 0)
        {
            break;
        }
        numarr[mul % 10]++;
        mul /= 10;
    }
    
    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", numarr[i]);
    }
    
}