#include<stdio.h>
int main()
{
    int n,temp,sum=0,rem,r;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {   rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    r=n%sum;
    if(r==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
