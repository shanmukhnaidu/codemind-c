#include<stdio.h>
int main()
{
    int n,diagonal,c;
    scanf("%d",&n);
    c=(n*(n-3));
    diagonal=(c)/2;
    printf("%d",diagonal);
    return 0;
}