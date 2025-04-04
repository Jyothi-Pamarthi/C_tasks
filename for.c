
/*

#include<stdio.h>
int main()
{
        int a=5,i;
        for(i=0;i<a;i++)
        {
                printf("Hello\n");
        }
        return 0; 
} */

/*#include<stdio.h>
int main()
{
        int a=5,i;               
        for( ;i<a;i++)
        {
                printf("Hello\n");        o/p : print 5 times hello
        }                                       no differene with initialization or without initialisation
        return 0; 
} */



/*#include<stdio.h>
int main()
{
        int a=5,i;
        for(i=0; ;i++)
        {
                printf("Hello\n");       o/p : infinate loop without condition
        }
        return 0;
} */




/*#include<stdio.h>
int main()
{
        int a=5,i;
        for(i=0;i<a; )
        {
                printf("Hello\n"); // infinate loop without update expression
        }
        return 0;
} */



/*#include<stdio.h>
int main()
{
        int a=5,i=0;
        for( ; ; )
        {
	        if(i<a)
               		 printf("Hello\n");    	//  o/p : infinate loop 
		i++;
        }
        return 0;
} */



#include<stdio.h>
int main()
{
        int a=5,i=0;
        for( ; ; )
        {
       		printf("Hello\n");    //o/p :infinate loop 
                i++;
        }
        return 0;
}






