#include<stdio.h>
int main()
{
 int s1,s2,s3,total;
 float average;

 printf("Enter three subject marks:\n");
scanf("%d%d%d",&s1,&s2,&s3);

 total=s1+s2+s3;
 average=total/3;

 printf("Total= %d\nAverage= %f",total,average);

return 0;
}