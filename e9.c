#include<stdio.h>
struct def{
	int a;
	int b;
	int *p;
	int *q;
};
void fun(struct def integer);
int main()
{
	struct def integer;
	integer.p=&integer.a;
	integer.q=&integer.b;
	printf("Enter two values : ");
	scanf("%d %d",&integer.a,&integer.b);
	fun(integer);
}
void fun(struct def integer)
{
	printf("a value : %d\n",*(integer.p));
	printf("b value : %d\n",*(integer.q));
}

