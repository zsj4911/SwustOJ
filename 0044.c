#include<stdio.h>

void perfect(int n)
{
    int sum=0,k=0,a[100];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum+=j;
                a[k]=j;
                k++;
            }
        }
        if(i==sum)
        {
            printf("%d its fastors are %d ",sum,a[0]);
            for(int x=1;x<k-1;x++)
            {
                printf("%d ",a[x]);
            }
            printf("%d",a[k-1]);
            printf("\n");
        }
        sum=0;
        k=0;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    perfect(n);
    return 0;
}