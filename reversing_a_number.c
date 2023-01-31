#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,reverse=0,rem;
    printf("enter a number \n");
    scanf("%d",&n);

    while(n!=0)
    {
        rem = n%10;
        reverse=reverse*10+rem;
        n/=10;
    }
    printf("reversed number = %d",reverse);

    return 0;
}


