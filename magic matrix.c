//this is the program to print magic matrix

#include<stdio.h>

int main()
{
	int n,i,j;
	int k=1;
	printf("enter the value of n");
	scanf("%d",&n);
	int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=0;
        }
    }
    i=n/2,j=n-1;
    a[i][j]=k++;
    while(k<=n*n)
    {
        i--;
        j++;
        
        if(i==-1&&j==n)
        {
            i=0;
            j=n-2;
        }
        if(j==n)
        j=0;
        if(i==-1)
        i=n-1;
	 while(a[i][j]!=0)
        {
            i++;
           j=j-2;
        }
        if(a[i][j]==0)
        {
            a[i][j]=k++;
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
 
