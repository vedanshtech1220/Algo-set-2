#include<stdio.h>

int pair(int a[], int n, int x)
{
	int l=0, r=n-1;
	while(l<r)
	{
		int sum=a[l]+a[r];
		if(sum==x)
		{
			return 1;
		}
		else if(sum<x)
		{
			l++;
		}
		else
		{
			r--;
		}
	}
	return 0;
	
}
int main()
{
	int N,f=0;
	
	printf("Enter the size of array:");
	scanf("%d",&N);
		
	int a[N],X;
	
	printf("Enter the elements of array:");
	for(int i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element which is equivalent to the sum of pairs:");
	scanf("%d",&X);
    if(pair(a,N,X))
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
