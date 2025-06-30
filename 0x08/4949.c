// 4949
#include <stdio.h>
#include <string.h>

int stringcheck(char *str);

int main()
{
    while (1)
    {
        char str[105] = {}; scanf("%[^\n]s", str);
        getchar();
        if(!strcmp(str, "."))
        {
            break;
        }
        int a = stringcheck(str);
        a == 1 ? printf("yes\n") : printf("no\n");
        
    }
}
int stringcheck(char *str)
{
    char dat[105] = {};
    int head = 0;
    int tail = 0;
    int length = strlen(str);
    int parentheses = 0;
    
    for (int i = 0; i < length; i++)
    {
        if (str[i] == '(' || str[i] == '[')
        {
            dat[tail] = str[i];
            tail++;
        }
        if (str[i] == ')' || str[i] == ']')
        { // 여는 괄호와 닫는 괄호가 맞지 않는 경우
            if (tail != 0)
            {
                tail--;
                char check = dat[tail];
                //printf("%c %c\n", check, str[i]);
                if (check == '(' && str[i] != ')')
                {
                    //printf("incorrect_each_side\n");
                    return 0;
                }
                else if (check == '[' && str[i] != ']')
                {
                    //printf("incorrect_each_side\n");
                    return 0;
                }
            }
            else //tail == 0 :여는 괄호가 남지 않았는데 닫는 괄호가 들어온 경우
            {
                //printf("incorrect_isnotremain\n");
                return 0;
            }
        }
    }
    if (tail != 0) // 여는 괄호가 남음
    {
        //printf("incorrect_remain\n");
        return 0;
    }
    return 1;
}