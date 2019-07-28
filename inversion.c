#include<stdio.h>
#include<stdlib.h>

long merge(long *arr, int l, int mid, int r)
{
    int i = l, j = mid, k = 0;
    long inv=0;
    long c[r-l+1];

    while (i < mid && j <= r)
    {
        if (arr[i] > arr[j])
        {
            c[k++] = arr[j++];
            inv += mid - i;
        }
        else
        {
            c[k++] = arr[i++];
        }
    }

    while (i < mid)
        c[k++] = arr[i++];
    while (j <= r)
        c[k++] = arr[j++];
    for (int i = 0; i <=r-l; i++)
        arr[l+i] = c[i];
    return inv;    
}

long mergesort(long *arr, int l, int r)
{
    long inv = 0;
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        inv = mergesort(arr, l, mid);
        inv += mergesort(arr, mid + 1, r);
        inv += merge(arr, l, mid+1, r);
    }
    return inv;
}

int main() {
	int t;
	long n;
	scanf("%d",&t);
	while(t--)
	 {
	     scanf("%li",&n);
	     long a[n];
	     for(long i=0;i<n;i++)
	        scanf("%li",&a[i]);
	    long inv= mergesort(a,0,n-1);  
	    printf("%li\n",inv); 
	 }
	return 0;
}
