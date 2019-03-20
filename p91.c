#include<stdio.h>
int main()
{
    int n,base=1,bin=0,r;
    scanf("%d",&n);
    while(n)
    {
        r=n%2;
        bin=bin+(r*base);
        n=n/2;
        base=base*10;
    }
    printf("%d",bin);
}
