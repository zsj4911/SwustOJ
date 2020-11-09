#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double Sum=0,SquareSum=0;
    double ReciprocalSum=0;
    scanf("%d %d %d",&a,&b,&c);
    for(int i=1;i<=a;i++)
    {
        Sum+=i;
    }
    for(int k=1;k<=b;k++)
    {
        SquareSum+=pow(k,2);
    }
    /*
    *倒数涉及到小数，而整数和平方和直接用整数
    */
    for(double j=1;j<=c;j++)
    {
        ReciprocalSum+=1/j;
    }
    printf("%.2lf\n",Sum+SquareSum+ReciprocalSum);
    return 0;
}