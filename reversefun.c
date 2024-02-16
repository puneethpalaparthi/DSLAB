#include<stdio.h>
int reverse(int a[],int n)
{
		int b[5];
		int i,j;
		printf("enter the size of the array:");
		scanf("%d",&n);
		printf("enter the elements in array:");
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=n-1,j=0;i>=0;i--,j++)
		{
		 b[j]=a[i];
		 printf("%4d",b[j]);
		}
}		 
int main()
{
	int a[100],n;
	reverse(a,n);
}
