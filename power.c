#include<stdio.h>
#include<stdlib.h>

int Power(int x,int n)
{
	int temp;
	if(n==0)
	{
		return 1;
	}
	temp=Power(x,n/2);
	if(n%2==0)
	{
		return temp*temp;
	}
	else
	{
		return temp*temp*x;
	}
	return temp;
}

int main()
{
	int x,n;
	scanf("%d %d",&x,&n);
	printf("%d",Power(x,n));
	return 0;
}

