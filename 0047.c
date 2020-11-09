#include<stdio.h>

int main()
{
    int n,m=1;
    scanf("%d",&n);
    for(int i=n-1;i>0;i--)
    {
        m=(m+1)*2;
    }
    printf("%d\n",m);
    return 0;
}