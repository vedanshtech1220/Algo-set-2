#include<stdio.h>
int main()
{
	int n, count=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				count++;
			}
		}
	}
	printf("Total inversions in the array are:%d",count);
}
