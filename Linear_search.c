#include<stdio.h>
int main()
{
	int ar[5],n,i;
	int pos=-1,key;
	printf("enter number of elements inn array:");
	scanf("%d",&n);
	printf("enter the elements in the array:");
	for (i=0;i<n;i++)
	scanf("%d",&ar[i]);
	printf("enter the element for search:");
	scanf("%d",&key);
	for (i=0;i<n;i++)
	{
	  if(key==ar[i])
	  {
          pos=i;	  
	   	  break;
	  }
    }
       if(pos>=0)
       {
       		printf("element %d found at:%d",key,pos+1);
       }
      else
       {
	  		printf("element is not found");
	   }
	
}	
	
	  	 
