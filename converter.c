#include <stdio.h>
#include <stdlib.h>

int main()
{
   char input;
   float kmsToMiles = 0.621371;
   float InchesToFoot = 0.0833333;
   float cmsToInches = 0.393701;
   float poundToKgs = 0.453592;
   float InchesToMeters = 0.0254;
   float RupeeToDollar=0.014;
   float first,second;

   while(1)
   {
       printf("enter the input which you want to convert and for quit press q.....  \n\n  1.kmsToMiles \n  2.InchesToFoot \n  3.cmsToInches \n 4.poundToKgs \n 5.InchesToMeters \n 6.RupeeToDollar \n\n\n");
       scanf("%c",&input);
             switch(input)
        {
            case 'q':
            printf("quitting the program............ \a\n\n");
            goto end;
            break;

              case '1':
              printf("enter the quantity in terms of first unit \n\n");
              scanf("%f \n",&first);
              second = first*kmsToMiles;
              printf("%.3f kms is the conversion of %.3f miles \n\n\a\n",first,second);
              break;

              case '2':
              printf("enter the quantity in terms of first unit \n\n");
              scanf("%f \n",&first);
              second = first*InchesToFoot;
              printf("%.3f inches is the conversion of %.3f foot \a\n\n\n",first,second);
              break;

              case '3':
              printf("enter the quantity in terms of first unit \n\n");
              scanf("%f \n",&first);
              second = first*cmsToInches;
              printf("%.3f cms is the conversion of %.3f inches  \a\n\n\n",first,second);
              break;

              case '4':
              printf("enter the quantity in terms of first unit \n\n");
              scanf("%f",&first);
              second = first*poundToKgs;
              printf("%.3f pound is the conversion of %.3f kgs \a\n\n\n",first,second);
              break;

              case '5':
              printf("enter the quantity in terms of first unit \n\n");
              scanf("%f",&first);
              second=first*InchesToMeters;
              printf("%.3f inches is the conversion of %.3f meters \a\n\n\n",first,second);
              break ;

              case '6':
              printf("enter the quantity in terms of first unit \n\n");
              scanf("%f",&first);
              second=first*RupeeToDollar;
              printf("%.3f Rs is the conversion of %.3f Dollar \a\n\n\n",first,second);


              case 'default':
              printf("in default now");
              break ;

        }

   }
   end:
    return 0;
}
