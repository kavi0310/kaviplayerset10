#include<stdio.h>
int main()
{
    int a,b,c=0,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%2!=0)
        {
            c=c+i;
        }
    }
    printf("%d",c);
}
