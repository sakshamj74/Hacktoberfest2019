#include<stdio.h>
#include<conio.h>
int fib(int a);
int main()
{
	int i;
	for(i=0;i<=10;i++)
	{
		printf("\n%d",fib(i));
	}
}
int fib(int a)
{
	if(a==0||a==1)
	{
		return a;
	}
	else
	{
		a=fib(a-1)+fib(a-2);
	}
}
