#include<stdio.h>
int main()
{
	int x,y,*a,*b,temp;
	printf("enter x and y value\n");
	scanf("%d %d",&x,&y);
	printf("before swappind x=%d,y=%d",x,y);

	a=&x;
	b=&y;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\nafter swappind x=%d,y=%d",x,y);
}
/*output
enter x and y value
5 10
before swappind x=5,y=10
after swappind x=10,y=5
*/
