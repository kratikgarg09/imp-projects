      /*A menu driven programme */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

 int main()
{
    int Choice,num,i;
    unsigned long int fact;
   while(1)
    {

        printf("*\n 1 for factorial \n");
        printf("*\n 2 for prime or not  \n");
        printf("*\n 3 for odd or even   \n");
        printf("*\n 4 for exit  \n");


        printf("Enter your choice \n");
        scanf("%d",&Choice);

        switch(Choice)
        {
        case 1:
            printf("Enter a number \n");
            scanf("%d",&num);

            fact=1 ;
            for(i=1;i<=num;i++)
            fact=fact*i;
            printf("factorial value = %lu",fact);
            break;

        case 2:
            printf("Enter a number \n");
            scanf("%d",&num);

            for(i=2;i<=num;i++)
            {
            if (num%i==0)\
            {
                printf("\n Not a prime number");
            }
            }
            if (i==num)
                printf("\n Prime number");

            break;

        case 3:
            printf("Enter a number \n");
            scanf("%d",&num);

            if (num%2==0)
                printf("*\n Number is even\n");
            else
                printf("*\n Number is odd\n");
            break;
        case 4:
            exit(0);/*To terminates the process*/

        }
    }
    return 0;
}
