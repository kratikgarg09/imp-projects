#include <stdio.h>
#include <stdlib.h>

int main()
{
    float income;
    printf("please enter your income");
    scanf("%f",&income);
    if (income<250000)
        printf("You don't have to pay tax");
    else if(income>=250000&& income<500000)
        printf("you have to pay 5 percent tax");
    else if(income>=500000&& income<1000000)
        printf("you have to pay 10 percent tax");
    else if(income>=1000000)
        printf("you have to pay 30 percent tax");
    return 0;
}
