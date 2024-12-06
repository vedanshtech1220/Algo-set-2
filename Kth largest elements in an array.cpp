#include<stdio.h>
#include<limits.h>
int kthLargest(int a[], int n, int k)
{
	int max_value, max_index;
	int used[n];
	for(int i=0;i<n;i++)
	{
		used[i]=0;
	}
	for(int i=0;i<k;i++)
	{
		max_value=INT_MIN;
		max_index=-1;
		for(int j=0;j<n;j++)
		{
			if(!used[j] && a[j]>max_value)
			{
				max_value=a[j];
				max_index=j;
			}
		}
		used[max_index]=1;
	}
	return max_value;
}
int main()
{
	int n,k;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the kth element you want to find in array:");
	scanf("%d",&k);
	printf("the %d largest element is:%d",k,kthLargest(a,n,k));
}
