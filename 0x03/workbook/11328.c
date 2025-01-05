// 11328
#include <stdio.h>
#include <string.h>

void checker(char *str1check, char *str2check);

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char str1[1001] = {};
        char str1check['z' - 'a' + 1] = {};
        char str2[1001] = {};
        char str2check['z' - 'a' + 1] = {};
        
        scanf("%s", str1);
        int length1 = strlen(str1);
        for (int j = 0; j < length1; j++)
        {
            str1check[str1[j] - 'a'] += 1;
        }

        scanf("%s", str2);
        int length2 = strlen(str2);
        for (int j = 0; j < length2; j++)
        {
            str2check[str2[j] - 'a'] += 1;
        }
        for(int j = 0; j <= 'z' - 'a'; j++)
        {
            printf("%d ", str1check[j]);
        }
        printf("\n");
        for(int j = 0; j <= 'z' - 'a'; j++)
        {
            printf("%d ", str2check[j]);
        }
        
        
        if (length1 != length2)
        {
            printf("Impossible\n");
        }
        else
        {
            checker(str1check, str2check);
        }
    }
}

void checker(char *str1check, char *str2check)
{
    int flag = 1;
    for (int i = 0; i <= 'z' - 'a'; i++)
    {
        if (str1check[i] != str2check[i])
        {
            flag = 0;
            break;
        }
    }
    flag == 1 ? printf("Possible\n") : printf("Impossible\n");
}