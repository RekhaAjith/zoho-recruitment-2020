#include<stdio.h>
void main()
{
	int n,i,j,k=0,col;
	int temp;
	int num=1;
	
	printf("Enter value of n");
	scanf("%d",&n);
	temp=n-1;
	col=n;
	for(i=0;i<n;i++)
	{
		for(j=temp;j>0;j--)
		{
			printf(" ");
		}
		temp--;
		k+=num;
		while(k<=col)
		{
			printf("%d",k);
			k++;
		}
		k--;
        printf("\n");
		col=col+n;		
	}
}
