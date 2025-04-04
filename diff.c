#include<stdio.h>
int main(){
	int a=-10;
	unsigned int b=2;
	if(a>b)
	{
		printf("a is larger\n");   //o/p : a is larger because comparision b/w two diff datatypes 
	}                                  //the lower datatype promoted to higher datatype
	else
	{
		printf("b is larger\n");
	}
	return 0;
}
