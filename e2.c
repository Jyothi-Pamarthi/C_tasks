#include<stdio.h>
int main()
{
	int a=40,b,c;
	int *p;
	p=&a;
	b=*p;
	c=p; // wrong 
	printf("%d\n",a);
	printf("%p\n",&a);
	printf("%p\n",p);
	printf("%d\n",b);
	printf("%p\n",&c);
}

