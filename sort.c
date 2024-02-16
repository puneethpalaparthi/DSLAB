#include<stdio.h>
int main()
{
	int ar[10],i,j,temp,n;
	printf("enter size of array:");
	scanf("%d",&n);
	printf("enter the elements in array:");
	for(i=0;i<n;i++)
	scanf("%d",&ar[i]);
	for(i=0;i<n;i++)
	  {
   	    for(j=i+1;j<n;j++)
	    {
	    	if(ar[i]>ar[j])
	    	{
	    	  temp=ar[i];
	    	  ar[i]=ar[j];
	    	  ar[j]=temp;
	    	}
	    }
	  }
	   for(i=0;i<n;i++)
	   {
	   		printf("%4d",ar[i]);
	   	}
}       
