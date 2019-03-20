#include<stdio.h>
int main()
{
    int n,r,i=0,a[100],c=0,j,m=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        a[i]=r;
        n=n/10;
        i++;
        m++;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
    }
    if(c>=2)
    printf("yes");
    else
    printf("no");
}
