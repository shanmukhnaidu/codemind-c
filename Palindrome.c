#include<stdio.h>
int main()
{
    int n,rev=0,rem,p;
    scanf("%d",&n);
    p=n;
    while(n!=0)
    {
        rem=n%10;
        rev=(rev*10+rem);
        n=n/10;
    }
    if(p==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}