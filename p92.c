#include<stdio.h>
int main()
{
    int n,base=1,dec=0,r;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        dec=dec+(r*base);
        n=n/10;
        base=base*2;
    }
    printf("%d",dec);
}
