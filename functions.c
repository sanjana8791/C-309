#include<stdio.h>
void dif()
{
	int a,b,dif;
	scanf("%d %d",&a,&b);
	dif=a-b;
	printf("&d",dif);
}
void mult()
{
	int a,b,pro;
	scanf("%d %d",&a,&b);
	pro=a*b;
	printf("%d",pro);
}
int main()
{
	dif();
	printf("difference");
	mult();
	printf("product");
	return 0;
	
}
