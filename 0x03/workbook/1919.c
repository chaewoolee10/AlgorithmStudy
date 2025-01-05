//1919
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[1005] = {}; scanf("%s", str1);
    char str2[1005] = {}; scanf("%s", str2);
    
    char str1check['z' - 'a' + 1] = {};
    char str2check['z' - 'a' + 1] = {};
    
    int str1length = strlen(str1);
    int str2length = strlen(str2);
    
    for(int i = 0; i < str1length; i++)
    {
        str1check[str1[i] - 'a']++;
    }
    for(int i = 0; i < str2length; i++)
    {
        str2check[str2[i] - 'a']++;
    }
    
    int count = 0;

    for(int i = 0; i <= 'z' - 'a'; i++)
    {
        if(str1check[i] > str2check[i])
        {
           count += str1check[i] - str2check[i];
        }
        else
        {
            count += str2check[i] - str1check[i];
        }
    }
    
    printf("%d", count);
}