#include <stdio.h>
#include <string.h>

int main()
{
    char arr[10] = {};
    scanf("%s", arr);
    strcat(arr, "a");
    printf("%d", strlen(arr));
    printf("%s", arr);
}