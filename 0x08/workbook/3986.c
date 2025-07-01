//3986
#include <stdio.h>
#include <string.h>

int stringcheck(char *str);

int main()
{
    int n; scanf("%d", &n);
    int count = 0;
    
    for(int i = 0; i < n; i++)
    {
        char str[100005] = {}; 
        scanf("%s", str);
        if(stringcheck(str) == 1)
        {
            count++;
        }  
    }
    printf("%d", count);
}

int stringcheck(char *str)
{
    char dat[100005] = {};
    int pos = 0;
    int length = strlen(str);
    for(int i = 0; i < length; i++)
    {
        if(pos == 0)
        {
            dat[pos] = str[i];
            pos++;
        }
        else
        {
            if(dat[pos - 1] != str[i]) //이전과 다른 문자라면 push
            {
                dat[pos] = str[i];
                pos++;
            }
            else //같으면 pop
            {
                pos--;
            }
        }
        
    }
    return pos == 0 ? 1 : 0; //pos가 0이면 다 지워졌다는 뜻 -> return 1
}