#include<stdio.h>
int x=0,n,count=1;
void fillarr(int arr[][20])
{
	int i,j;for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d ",arr[i][j]);
		}
		printf("\n");
	}	
	if(x==(n+1)/2)
	{
		if(n%2)
		{
			arr[x-1][x-1]=count;return;
		}
		else
		{
			return;
		}
	}
	//int i,j;
	for(i=n-x;i<x;i++)
	{
		arr[n-x][i] =  count++;
		
	}
	count--;
	for(i=n-x;i<x;i++)
	{
		arr[i][x-1] =  count++;
		
	}
	count--;
	for(i=x-1;i>=n-x;i--)
	{
		arr[x-1][i] =  count++;
		
	}
	count--;
	for(i=x-1;i>n-x;i--)
	{
		arr[i][n-x] =  count++;
		
	}
	//count--;
	x--;
	fillarr(arr);
}
void main()
{
	//int n;
	printf("enter size");
	scanf("%d",&n);
	int arr[20][20];
	x=n;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			arr[i][j]=0;
		}
	printf("\n");
	}
	fillarr(arr);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d ",arr[i][j]);
		}
	printf("\n");
	}
}
