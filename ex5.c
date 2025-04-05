#include<stdio.h>
void fun1(void);
void fun2(void);
struct display{
	int a;
	int b;
};
struct display num;
int main()
{
	fun1();
	fun2();
}
void fun1(void)
{
	printf("Enter two integer numbers : ");
	scanf("%d %d",&num.a,&num.b);
}
void fun2(void)
{
	printf("Display a value : %d\n",num.a);
	printf("Display b value : %d\n",num.b);
}
	
