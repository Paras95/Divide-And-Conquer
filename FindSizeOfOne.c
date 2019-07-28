#include<stdio.h>
#include<stdlib.h>

int FindSizeOfOneUtil(int arr[],int low,int high)
{
	if(high>=low)
	{
		int mid=low+(high-low)/2;
		if((mid==0 || arr[mid-1]==0)&&arr[mid]==1)
		{
			return mid;
		}
		return((arr[mid]==0)?FindSizeOfOneUtil(arr,mid+1,high):FindSizeOfOneUtil(arr,low,mid-1));
	}
}

void FindSizeOfOne(int arr[],int n)
{
	int low=0;
	int first=FindSizeOfOneUtil(arr,0,n-1);
	if(first)
	{
		printf("%d ",n-first+1);
	}
	else
	{
		printf("-1");
	}
	return;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i;
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		FindSizeOfOne(arr,n);
	}
	return 0;
}
