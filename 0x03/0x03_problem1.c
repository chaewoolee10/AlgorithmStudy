// 배열 구현
#include <stdio.h>

void insert(int idx, int num, int *arr, int *len);
void erase(int idx, int *arr, int *len);

void inserttest();
void erasetest();

void printarr(int *arr, int *len);

int main()
{
    inserttest();
    erasetest();
}

void insert(int idx, int num, int *arr, int *len)
{
    for(int i = *len; i > idx; i--)
    {
        arr[i] = arr[i - 1]; 
        //오른쪽으로 한칸씩 밀기 (메모리 공간 절약 가능)
    }
    arr[idx] = num;
    *len += 1;
    
    /*
    
    int newarr[10] = {};
    for (int i = 0; i < *len; i++)
    {
        newarr[i] = arr[i];
    }
    arr[idx] = num;
    
    for (int i = 0; i < *len + 1; i++)
    {
        if (i > idx)
        {
            arr[i] = newarr[i - 1];
        }
        
    }
    
    
    */
}

void erase(int idx, int *arr, int *len2)
{
    for(int i = idx; i < *len2; i++)
    {
        arr[i] = arr[i + 1];
        //왼쪽으로 한칸씩 당기기
    }
    /*
    int newarr[10] = {};
    for(int i = 0; i < *len2; i++)
    {
        newarr[i] = arr[i];
    }
    
    for(int i = 0; i < *len2 - 1; i++)
    {
        if(i >= idx)
        {
            arr[i] = newarr[i + 1];
        }
    }
    */
    *len2 -= 1;
}

void printarr(int *arr, int *len)
{
    for (int i = 0; i < *len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void inserttest()
{
    int arr[10] = {10, 20, 30};
    int len = 3;

    printf("******inserttest******\n");
    insert(3, 40, arr, &len);
    printarr(arr, &len);
    insert(1, 50, arr, &len);
    printarr(arr, &len);
    insert(0, 15, arr, &len);
    printarr(arr, &len);
}

void erasetest()
{
    int arr2[10] = {10, 50, 40, 30, 70, 20};
    int len2 = 6;
    
    printf("******erasetest******\n");
    erase(4, arr2, &len2);
    printarr(arr2, &len2);
    erase(1, arr2, &len2);
    printarr(arr2, &len2);
    erase(3, arr2, &len2);
    printarr(arr2, &len2);
}