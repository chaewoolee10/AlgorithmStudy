// 17478
#include <stdio.h>

int recur(int n);
int count = 0;
char str[5][10000] = {"\"재귀함수가 뭔가요?\"\n",
                      "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n",
                      "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n",
                      "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n",
                      "라고 답변하였지.\n"};

int main()
{
    int n;
    scanf("%d", &n);
    printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
    count = n;
    recur(n);
}

int recur(int n)
{
    if (n == 0)
    {
        for(int i = 0; i < count; i++)
        {
            printf("____");
        }
        printf("%s", str[0]);
        for(int i = 0; i < count; i++)
        {
            printf("____");
        }
        printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
        for(int i = 0; i < count; i++)
        {
            printf("____");
        }
        printf("%s", str[4]);
        return 0;
    }
    else
    {
        for(int i = 0; i < count - n; i++)
        {
            printf("____");
        }
        printf("%s", str[0]);
        for(int i = 0; i < count - n; i++)
        {
            printf("____");
        }
        printf("%s", str[1]);
        for(int i = 0; i < count - n; i++)
        {
            printf("____");
        }
        printf("%s", str[2]);
        for(int i = 0; i < count - n; i++)
        {
            printf("____");
        }
        printf("%s", str[3]);
        recur(n - 1);
        for(int i = 0; i < count - n; i++)
        {
            printf("____");
        }
        printf("%s", str[4]);
        return n - 1;
    }
}