#include<stdio.h>

void print(int arr[],int len)
{
   
    for(int i = 0;i < len ; i ++)
    {
        int a = arr[i];
        printf("%d\n",a);
    }

}

void reverse(int arr[],int len)
{
    int temp,i,j;
    j = len - 1;
    for (i = 0;i < j;i ++ ,j --)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

}

int main (void)
{
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int len = sizeof(arr)/sizeof(arr[1]);
    reverse(arr,len);
    print(arr,len);
    return 0;
}