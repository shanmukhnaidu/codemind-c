#include<stdio.h>
int main()
{
    int a,b,h;
    scanf("%d%d",&a,&b);
    h=a<b?a:b;
    for(;h>=1;h--)
    {
        if(a%h==0 && b%h==0)
        break;
    }
    {
        printf("%d",h);
    }
    return 0;
}
