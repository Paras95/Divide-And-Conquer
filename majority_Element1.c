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

int isMajority(int arr[],int n)
{
	int max_index=0,count=1;
    int i;
    for(i=1;i<n;i++)
    {
		if(arr[i]==arr[max_index])
		{
			count++;
		}
		else
		{
			count--;
		}
		if(count==0)
		{
			max_index=i;
			count=1;
		}
	}
	return arr[max_index];
}

void majority_element(int arr[],int n)
{
	int count=isMajority(arr,n);
	int i,c=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==count)
		{
			c++;
		}
	}
	if(c>=n/2)
	{
		printf("%d is majority element:\n",count);
	}
	else
	{
		printf("Sorry Brother:\n");
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
	majority_element(arr,n);
	return 0;
}
