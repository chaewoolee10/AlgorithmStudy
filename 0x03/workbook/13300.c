//13300
#include <stdio.h>

int main()
{
    int n; scanf("%d", &n);
    int k; scanf("%d", &k);
    
    int student[6][2] = {}; //학년, 여자 0, 남자 1
    
    for(int i = 0; i < n; i++)
    {
        int gender; scanf("%d", &gender);
        int grade; scanf("%d", &grade);
        
        student[grade - 1][gender]++;
    }
    
    int count = 0;
    
    for(int i = 0; i < 6; i++)
    {
        count += student[i][0] / k;
        count += student[i][1] / k;
        if(student[i][0] % k > 0)
        {
            count++;
        }
        if(student[i][1] % k > 0)
        {
            count++;
        }
    }
    printf("%d", count);
    
}