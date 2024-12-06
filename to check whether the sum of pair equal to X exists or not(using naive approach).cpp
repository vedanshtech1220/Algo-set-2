#include<stdio.h>
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
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if(a[i]+a[j]==X)
			{
				f=1;
			}
		}
	}
	if(f)
	printf("Yes");
	else
	printf("No");
}
