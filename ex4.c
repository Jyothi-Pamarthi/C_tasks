#include<stdio.h>
struct addition{
	int a;
	int b;
	int c;
};
int main()
{
	struct addition sum;
	printf("Enter two integers : ");
	scanf("%d %d",&sum.a,&sum.b);
	sum.c = sum.a+sum.b;
	printf("sum = %d\n",sum.c);
}
