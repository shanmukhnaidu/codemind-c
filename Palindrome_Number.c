#include<stdio.h>
int main()
{
    int t,i,n[20],rem[20],s[20];
    int rev[i];
    scanf("%d",&t);
    
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<t;i++)
    {
        
        s[i]=n[i];
        while(n[i]!=0)
        {
            rem[i]=n[i]%10;
            rev[i]=rev[i]*10+rem[i];
            n[i]=n[i]/10;
        }
        if(rev[i]==s[i])
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
        printf("
");
        
    }
    return 0;
}