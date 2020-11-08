#include<stdio.h>
#include<math.h>

/*pow(x,y)
*求x的y次方
*使用时，需要 #include<math.h>
*/

int main()
{
    int a,n,Sn=0,mid=0;
    scanf("%d %d",&a,&n);
    for(int i=0;i<n;i++)
    {
        mid=pow(10,i)*a+mid;
        Sn+=mid;
    }
    printf("%d\n",Sn);
    return 0;
}
