#include <stdio.h>
#include <stdlib.h>
void swap(int *,int *);
int main()
{
    int a=10,b=20;
    printf("before swap a=%u b=%d \n",a,b);
    swap(&a,&b);
    printf("after swap a=%u b=%d \n",a,b);
    return 0;
}
void swap(int *x , int *y)
{
    int t ;
    t=*x;
    *x=*y;
    *y=t;
    //printf("x=%u y=%u \n",x,y);
}
