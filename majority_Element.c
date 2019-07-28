#include<stdio.h>

int MajorityElement(int arr[],int n)
{
	int index;
	index=n%2?(n/2)-1:n/2;
	for(int i=0;i<=index;i++)
	{
		if(arr[i]==arr[i+index])
		{
			return arr[i];
			break;
		}
	}
	return -1;
}

int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int temp=MajorityElement(arr,n);
	if(temp)
	{
	    printf("%d ",temp);
	}
	else
	{
	    printf("-1");
	}
  return 0;
}
