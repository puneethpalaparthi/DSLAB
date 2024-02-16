#include<stdio.h>
int sort(int a[],int n)
{
	int temp=0,i,j;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
printf("elements in order:");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
int main()
{
int b[100],n;
sort(b,n);
}
