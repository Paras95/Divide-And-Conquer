#include<stdio.h>
#include<limits.h>

int MissingNumberUtil(int arr[],int low,int high,int diff)
{
	if(high<=low)
	{
		return 0;
	}
	int mid=low+(high-low)/2;
	if(arr[mid+1]-arr[mid]!=diff)
	{
		return(arr[mid]+diff);
	}
	if(arr[mid]-arr[mid-1]!=diff)
	{
		return(arr[mid-1]+diff);
	}
	if(arr[mid]==arr[0]+mid*diff)
	{
		MissingNumberUtil(arr,mid+1,high,diff);
	}
	return MissingNumberUtil(arr,low,mid-1,diff);
}

void MissingNumber(int arr[],int n)
{
	int diff=arr[1]-arr[0];
	printf("%d ",MissingNumberUtil(arr,0,n-1,diff));
	return;
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
	MissingNumber(arr,n);
	return 0;
}
