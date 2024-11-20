//this is the program to print spiral matrix

#include<stdio.h>

int main()
{
	int n,i,j;
	int k=1;
	printf("enter the value of n");
	scanf("%d",&n);
	int a[n][n];
	
	for(i=0;i<(n+1)/2;i++)
	{
		for(j=i;j<n-i;j++)
		{
			a[i][j]=k++;
		}
		
		for(j=i+1;j<n-i;j++)
		{
			a[j][n-i-1]=k++;
		}
		for(j=n-2-i;j>=i;j--)
		{
			a[n-1-i][j]=k++;
		}
		for(j=n-2-i;j>i;j--)
		{
			a[j][i]=k++;
		}
	}

	printf("now printing the matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%7d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
