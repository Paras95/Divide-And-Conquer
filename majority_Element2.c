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


void majorityElement(int arr[],int n)
{
	int count[n];
	for(int i=0;i<n;i++)
	{
		count[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		++(count[arr[i]]);
	}
	for(int j=0;j<n;j++)
	{
		if(count[j]>=n/2)
		{
			printf("Majority element is %d",j);
		}
	}
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
	printArray(arr,n);
	majorityElement(arr,n);
	return 0;
}
