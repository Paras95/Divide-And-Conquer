#include<stdio.h>
#include<stdlib.h>

int count(int arr[],int n)
{
	int c=0;
	for(int i=0;i<n;i++)
	{
		c++;
	}
	return c;
}

void GetMedianOfTwoSortedArray(int *arr1,int *arr2,int n)
{
	int *arr3=(int*)malloc(sizeof(int)*2*n);
	int i,j,k;
	i=0;
	j=0;
	k=0;
	while(i<n || j<n)
	{
		if(arr1[i]<arr2[j])
		{
			arr3[k++]=arr1[i++];
		}
		else
		{
			arr3[k++]=arr2[j++];
		}
	}
	int max=2*n;
	int c=count(arr3,max);
	if(c%2==0)
	{
		printf("%d %d ",arr3[c/2],arr3[(c/2)-1]);
	}
	else
	{
		printf("%d ",arr3[c/2]);
	}
	return;
}

int main()
{
	int n,i;
	scanf("%d",&n);
	int arr1[n],arr2[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(int j=0;j<n;j++)
	{
		scanf("%d",&arr2[j]);
	}
	GetMedianOfTwoSortedArray(arr1,arr2,n);
	return 0;
}

