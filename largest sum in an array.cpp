#include<stdio.h>
int max(int a ,int b)
{
	if(a>b)
	return a;
	else
	return b;
}
int largest_sum(int a[], int n)
{
	int max_current=a[0], max_global=a[0];
	for(int i=1;i<n;i++)
	{
		max_current=max(max_current+a[i],a[i]);
		
		if(max_current>max_global)
		{
			max_global=max_current;
		}
	}
	return max_global;
}
int main()
{
	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The largest sum in the array is %d",largest_sum(a,n));
}
