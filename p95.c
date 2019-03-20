#include<stdio.h>
int main()
{
    int n,p,k,a[1000],c=0,r,m=0,b,l=0,i;
    scanf("%d%d%d",&n,&p,&k);
    b=n;
    while(b)
    {
        b=b/10;
        l++;
    }
    while(n)
    {
        r=n%10;
        a[l-1]=r;
        n=n/10;
        l--;
        m++;
    }
    while(k)
    {
        l=p+1;
        c=a[l];
        l++;
        k--;
    }
    printf("%d",c);
}
