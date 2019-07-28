#include<stdio.h>
#include<stdlib.h>

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
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void SuffleUtil(int arr[],int low,int high)
{
	if(low>=high)
	{
		return;
	}
	if(high-low==1)
	{
		return;
	}
	int mid=low+(high-low)/2;
	int temp=mid+1;
	int left_mid=(low+mid)/2;
	while(left_mid<=mid)
	{
		swap(&arr[left_mid++],&arr[temp++]);
	}
	SuffleUtil(arr,low,mid);
	SuffleUtil(arr,mid+1,high);
}

void suffle(int arr[],int n)
{
	int low=0;
	SuffleUtil(arr,0,n-1);
	printArray(arr,n);
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
		suffle(arr,n);
	}
	return 0;
}

