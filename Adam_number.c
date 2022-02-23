#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq,temp,rev=0,rev1=0,c;
    scanf("%d",&n);
    temp=n;
    sq=(temp*temp);
    while(temp!=0)
    {
        rev1=rev1*10+temp%10;
        temp=temp/10;
    }
    c=(rev1*rev1);
    while(c!=0)
    {
        rev=rev*10+c%10;
        c=c/10;
    }
    if(sq==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
    }