#include<stdio.h>
void main()
{
	char a;
        short b;
        int c = 9;
        float d = 5.96;
        double e;
        long int f;
	void *p;
	p=&a;
	*(char *)p='g';
	p=&b;
	*(short *)p=5;
	p=&c;
	*(int *)p=7;
	p=&d;
	*(float *)p=34.0;
	p=&e;
	*(double *)p=78.9;
	p=&f;
	*(long int *)p=987;
	printf("Char : %c\n",a);
	printf("Short : %hd\n",b);
	printf("Integer : %d\n",c);
	printf("Float : %f\n",d);
	printf("Double : %lf\n",e);
	printf("Lond int : %ld\n",f);
	
}
