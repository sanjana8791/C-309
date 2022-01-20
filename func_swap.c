#include<stdio.h>
int swap(int*,int*);
int main()
{
	int a=10,b=20;
	printf("before swapping :%d %d",a,b);
	swap(&a,&b);
	printf("\nafter swapping: %d %d",a,b);
	return 0;
}
int swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	printf("after swapping in the function:%d %d",*x,*y);
}
