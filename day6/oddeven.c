#include<stdio.h>
int main()
{
    int size;
    int even=0, odd=0;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    for(int 1=0;i<size;i++)
    scanf("%d",&arr[i]);
    if(arr[i]%2==0)
    {
        even++;
    }
    else
    {
        odd++;
 }
}
printf("even numbers:%d\n",even);
printf("odd numbers:%d\n",odd);