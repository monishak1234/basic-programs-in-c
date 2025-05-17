
#include <stdio.h>
#include<string.h>
int main()
{
    int x;
    scanf("%d",&x);
    int y=x;
    int ans=0;
    while(x>0)
    {
        int r=x%10;
        ans=ans*10+r;
        x=x/10;
    }
    if(ans==y) printf("yes\n");
    else printf("no");
    return 0;
    
}