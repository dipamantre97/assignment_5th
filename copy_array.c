#include<stdio.h>
int main()
{
	int a[50],b[50],i,n;
	int *p1=a;
	int *p2=b;
	printf("enter no of ele\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter ele of arr[%d]:",i);
		scanf("%d",&p1[i]);
		
	}
	printf("elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",p1[i]);
	}
	for(i=0;i<n;i++)
	{
		
		p2[i]=p1[i];
	}
	printf("\ncopy elements :");
	for(i=0;i<n;i++)
	{
		printf("%d\t",p2[i]);
	}
	
}
/*output
enter no of ele
4
enter ele of arr[0]:1
enter ele of arr[1]:2
enter ele of arr[2]:3
enter ele of arr[3]:4
elements are
1       2       3       4
copy elements :1        2       3       4
*/
