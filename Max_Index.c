#include<stdio.h>
#include<stdlib.h>

//Simple Approach    T(n)=O(n)  so not suitable for big size array

void printArray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return;
}
int Max_Index(int arr[],int n)
{
	int i;
	for(i=1;i<n;i++)
	{
		if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
		{
			return i;
		}
	}
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
	printArray(arr,n);
	printf("%d",Max_Index(arr,n));
	return 0;
}
