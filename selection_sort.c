#include<stdio.h>
int swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int sort(int a[],int n)
{
	int i,j,min;	
	for(i=0;i<n-1;i++)
	 {
	 	min=i;
	 	for(j=i+1;j<n;j++)
	 	{
	 	  	if(a[j]<a[min])
	 		{
	 			min=j;
	 		}
	 	}   
	 		
	 		if(min!=i)
	 		{
	 			swap(&a[min],&a[i]);
	 		} 
	 }
	 
}
int main()
{
	int a[100],n,i;
	printf("enter number of elements:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}
	sort(a,n);
	printf("the elements are in order:");
	 for(i=0;i<n;i++)
	printf("%d\n",a[i]); 
}
	
