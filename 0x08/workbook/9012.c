//9012
#include <stdio.h>
#include <string.h>

void vpscheck(char *str);

int main()
{
    int n; scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        char str[52] = {}; scanf("%s", str);
        vpscheck(str);
    }
}
void vpscheck(char *str)
{
    int length = strlen(str);
    char dat[52] = {};
    int pos = 0;
    int check = 1;
    
    for(int i = 0; i < length; i++)
    {
        if(str[i] == '(')
        {
            dat[pos] = str[i];
            pos++;
        }
        else if(str[i] == ')')
        {
            if(pos != 0)
            {
                pos--;
            }
            else
            {
                check = 0;
                break;
            }
        }
    }
    if(check == 0 || pos != 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
}