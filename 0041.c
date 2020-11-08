#include<stdio.h>
int main()
{
	int a;
	unsigned long long signal = 1, sum = 0;
	scanf_s("%d", &a, 1);
	for (long i = 1; i <= a; i++)
	{
		for (long j = 1; j <= i; j++)
		{
			signal *= j;
		}
		sum += signal;
		signal = 1;
	}
	/*在输出数字时，
	*如果选择小于输出数字的类型，
	*则会出现错误.
	long long类型，输出时使用 "%lld"
	*/
	printf("%lld\n", sum);

}