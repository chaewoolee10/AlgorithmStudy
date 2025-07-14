//0x0B recursion
//재귀를 이용한 n부터 1까지 출력

#include <stdio.h>

int recur_ntooneprint(int n);
int recur_ntoonesum(int n);

int main()
{
    int n; scanf("%d", &n);
    recur_ntooneprint(n);
    int sum = recur_ntoonesum(n);
    printf("%d", sum);
}

int recur_ntooneprint(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        printf("%d\n", n);
        return recur_ntooneprint(n - 1);
    }
}

int recur_ntoonesum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return n + recur_ntoonesum(n - 1);
    }
}
