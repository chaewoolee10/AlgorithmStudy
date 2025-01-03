//10808
#include <stdio.h>
#include <string.h>

int main()
{
    char str[101] = {};
    scanf("%s", str);
    
    int countarr['z' - 'a' + 1] = {};
    int length = strlen(str);
    
    for(int j = 0; j < length; j++)
    {
        for(int i = 'a'; i <= 'z'; i++)
        {
            if(i == str[j])
            {
                countarr[i - 'a']++;
            }
        }
    }
    
    for(int i = 0; i <= 'z' - 'a'; i++)
    {
        printf("%d ", countarr[i]);
    }
}