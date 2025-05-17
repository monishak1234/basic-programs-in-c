#include<stdio.h>
int main()
{
    int arr[]={1,2,5,6,7,8,14,21,29};
    int max=arr[0];
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=length-1;i++)
    {
        if(max<arr[i]) max=arr[i];
    }
    printf("%d",max);
}