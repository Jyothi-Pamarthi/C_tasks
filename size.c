#include<stdio.h>
int main(void)
{
	char a;
	short b;
	int c;
	long int d;
	float e;
	double f;                                     
	printf("Size of char : %lu\n",sizeof(a));                
	printf("Size of short : %lu\n",sizeof(b));
        printf("Size of int : %lu\n",sizeof(c));
        printf("Size of long : %lu\n",sizeof(d));
        printf("Size of float : %lu\n",sizeof(e));
        printf("Size of double : %lu\n",sizeof(f));	
}

