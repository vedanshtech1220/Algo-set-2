#include<stdio.h>
int main()
{
	int n;
	
	printf("Enter the size of array:");
	scanf("%d",&n);
		
	int p[n],X,f=0;
	
	printf("Enter the elements of array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	int min_profit=p[0];
	int max_profit=0, current_profit;
	
	for(int i=0;i<n;i++)
	{
		if(p[i]<min_profit)
		min_profit=p[i];
		
		current_profit=p[i]-min_profit;
		if(current_profit>max_profit)
		{
			max_profit=current_profit;
			f=1;
		}
	}
	if(f)
	printf("Maximum profit:%d",max_profit);
	
	else
	{
		printf("No Profit");
	}
}
