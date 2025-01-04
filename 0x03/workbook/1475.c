//1475
#include <stdio.h>
#include <string.h>

void stringtoarr(char *n, int *numarr);

int main()
{
    char n[8] = {}; scanf("%s", n);
    int numarr[9] = {}; //0 1 2 3 4 5 6 7 8
    
    stringtoarr(n, numarr);
    
    if(numarr[6] % 2 == 0)
    {
        numarr[6] /= 2;    
    }
    else
    {
        numarr[6] /= 2;
        numarr[6]++;
    }
    int max = 0;
    for(int i = 0; i < 9; i++)
    {
        if(max < numarr[i])
        {
            max = numarr[i];
        }
    }
    printf("%d", max);
}

void stringtoarr(char *n, int *numarr)
{
    int length = strlen(n);
    
    for(int i = 0; i < length; i++)
    {
        switch (n[i])
        {
        case '0':
            numarr[0]++;
            break;
        case '1':
            numarr[1]++;
            break;
        case '2':
            numarr[2]++;
            break;
        case '3':
            numarr[3]++;
            break;
        case '4':
            numarr[4]++;
            break;
        case '5':
            numarr[5]++;
            break;
        case '7':
            numarr[7]++;
            break;
        case '8':
            numarr[8]++;
            break;
        default:
            numarr[6]++;
            break;
        }
    }
}