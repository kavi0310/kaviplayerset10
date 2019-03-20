#include<stdio.h>
int main()
{
    int n,a[1000],i,j,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i=i+2)
    {
        for(j=i+1;j<n;j++)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            break;
        }
    }
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
}
