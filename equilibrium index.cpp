#include<stdio.h>
void equilibrium_index(int a[], int n)
{
	int left, right, f;
		for(int i=0;i<n;i++)
	{
		left=0;
		for(int j=0;j<i;j++)
		{
			left+=a[j];
		}
		right=0;
		for(int j=i+1;j<n;j++)
		{
			right+=a[j];
		}
		if(left==right)
		{
			printf("equilibrium index is:%d",i+1);
			f=1;
			break;
		}
	}
	if(!f)
	printf("-1");
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
	equilibrium_index(a,n);
}
