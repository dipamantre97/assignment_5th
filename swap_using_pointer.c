#include<stdio.h>
void _swap(int *p,int*q)
{
	int temp=p;
	p=q;
	q=temp;
	printf("after swapping a=%d,b=%d",*p,*q);
	
}
int main()
{
	int a=5,b=10;
	int *x=&a;
	int *y=&b;
	printf("before swapping a=%d,b=%d\n",a,b);
	_swap(x,y);
		
}
/*output
before swapping a=5,b=10
after swapping a=10,b=5
*/
