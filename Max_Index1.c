/*#include<stdio.h>
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

int Max_Index_Util(int arr[],int low,int high)
{
	if(low>high)
	{
		return 0;
	}
	int mid=low+(high-low)/2;
	if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
	{
		return mid;
	}
	if(arr[mid]<arr[mid+1])
	{
		return(Max_Index_Util(arr,mid+1,high));
	}
	if(arr[mid]<arr[mid-1])
	{
		return(Max_Index_Util(arr,low,mid-1));
	}
}

int Max_Index(int arr[],int n)
{
	int low=0;
	return(Max_Index_Util(arr,0,n-1));
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
*/

#include<stdio.h>
#include<stdlib.h>

int Max_Index_Util(int arr[],int low,int high)
{
	if(low>high)
	{
		return 0;
	}
	int mid=low+(high-low)/2;
	if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
	{
		return mid;
	}
	if(arr[mid]<arr[mid+1])
	{
		return(Max_Index_Util(arr,mid+1,high));
	}
	if(arr[mid]<arr[mid-1])
	{
		return(Max_Index_Util(arr,low,mid-1));
	}
}

int Max_Index(int arr[],int n)
{
	int low=0;
	return(Max_Index_Util(arr,0,n-1));
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
	  if(Max_Index(arr,n))
	   {
	      printf("%d \n",Max_Index(arr,n));
	   }
	 else
	  {
	    printf("-1");
	  }
	}
	return 0;
}
