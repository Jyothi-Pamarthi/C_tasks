#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
       // if(n>0)
       //	{
	//	printf("Positive\n");
       //	}
	else                              // error: ‘else’ without a previous ‘if’

	{
		printf("Negitive\n");
	}
	return 0;
}
