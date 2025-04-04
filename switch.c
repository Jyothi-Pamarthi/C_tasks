/*#include<stdio.h>
int main()
{
	int a;
	printf("Enter a value : ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("Jyothi\n");
			break;
		case 2:
                        printf("Bharath\n");
                        break;
		 case 3:
                        printf("Gayathri\n");
                        break;
		default:
			printf("You are entered wrong value\n");
	}
	return 0;
} */


/*#include<stdio.h>
int main()
{
        int a;
        printf("Enter a value : ");
        scanf("%d",&a);
        switch(a)
        {
                case 1:
                        printf("Jyothi\n");
                case 2:
                        printf("Bharath\n");
                 case 3:
                        printf("Gayathri\n");
                default:
                        printf("You are entered wrong value\n");
        }
        return 0;
}*/




/*#include<stdio.h>
int main()
{
        int a;
        printf("Enter a value : ");
        scanf("%d",&a);
        switch(a)
        {
                case 'a':
                        printf("Jyothi\n");
                        break;
                case 'b':
                        printf("Bharath\n");
                        break;
                 case 'c':
                        printf("Gayathri\n");        //'a' it takes a ascii value
                        break;
                default:
                        printf("You are entered wrong value\n");
        }
        return 0;
}*/



/*#include<stdio.h>
int main()
{
        int a,A,B,C;
        printf("Enter a character : ");
        scanf("%c",&a);
        switch(a)                                   // error: case label does not reduce to an integer constant
        {
                case A:
                        printf("Jyothi\n");
                        break;
                case B:
                        printf("Bharath\n");
                        break;
                 case C:
                        printf("Gayathri\n");
                        break;
                default:
                        printf("You are entered wrong value\n");
        }
        return 0;
}*/
