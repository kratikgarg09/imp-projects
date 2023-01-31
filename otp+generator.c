#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
int otp;
int lower=100000 , upper=999999;

srand(time(NULL));

otp=(rand()%(upper-lower+1))+lower;
printf("%d \n",otp);

return 0;
}
