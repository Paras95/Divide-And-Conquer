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

int max(int *a,int *b)
{
	return((*a>*b)?*a:*b);
}

int min(int *a,int *b)
{
	return((*a<*b)? *a:*b);
}

int median(int arr[],int n)
{
	return((n%2==0)?((arr[(n/2)-1]+arr[n/2])/2):arr[n/2]);
}

int GetMedianOfTwoSortedArray(int *arr1,int *arr2,int size)
{
	if(size==1)
	{
		return((arr1[0]+arr2[0])/2);
	}
	if(size==2)
	{
		return((max(&arr1[0],&arr2[0])+min(&arr1[1],&arr2[1]))/2);
	}
	int median1=median(arr1,size);
	int median2=median(arr2,size);
	if(median1==median2)
	{
		return median1;
	}
	if(median1>median2)
	{
		return(size%2==0)?GetMedianOfTwoSortedArray(arr2+size/2-1,arr1,size-size/2+1):GetMedianOfTwoSortedArray(arr2+size/2,arr1,size-size/2);
	}
	else if(median1<median2)
	{
		return(size%2==0)?GetMedianOfTwoSortedArray(arr1+size/2-1,arr2,size-size/2+1):GetMedianOfTwoSortedArray(arr1+size/2,arr2,size-size/2);
	}
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
	printf("Content of the First Array:\n");
	printArray(arr1,n);
	printf("Content of the second Array:\n");
	printArray(arr2,n);
	printf("median of Two sorted Array is:");
	printf("%d",GetMedianOfTwoSortedArray(arr1,arr2,n));
	return 0;
}
