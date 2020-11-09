#include<stdio.h>

void FreeFall(float m,float n)
{
    int judge=1;
    float i=1,sum=m;
    while(judge)
    {
        m=m/2;
        sum+=2*m;
        if(i==n)
        {
            judge=0;
        }
        i++;
    }
    printf("%.2f %.2f\n",m,sum-2*m);
}

int main()
{
    float a,b;
    scanf("%f %f",&a,&b);
    FreeFall(a,b);
    return 0;
}