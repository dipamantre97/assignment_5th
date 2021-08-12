#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i,j,temp;
	printf("Enter size of array:");
	scanf("%d",&n);

	p=calloc(sizeof(int),n);
	printf("Enter %d Elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
				temp=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=temp;
			}
		}
	}
	printf("After sorting it in ascending order:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
	return 0;
				
}
					    
/* output
Enter size of array:5
Enter 5 Elements:1
5
6
2
3
After sorting it in ascending order:1   2       3       5       6
*/

