#include<stdio.h>
int main()
{
    int n,r,c,l=0,a,p=1;
    scanf("%d",&n);
    a=n;
    while(a)
    {
        a=a/10;l++;
    }
    l=l-1;
    while(l)
    {
        p=p*10;
        l--;
    }
    while(n)
    {
        r=n%10;
        n=n/p;
        c=r+n;
        break;
    }
    printf("%d",c);
}
