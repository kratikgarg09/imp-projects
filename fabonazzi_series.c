#include <stdio.h>



int fib_recursive(int n)
{
    if (n==1 || n==2)
    {
        return n-1;
    }
    else
    {
        return fib_recursive(n-1) + fib_recursive(n-2);
    }


}
int fib_itretive(int n)
{
    int a=0;
    int b=1;

    for (int i = 0; i < n-1 ; i ++ )
    {
        b= a+b;
        a= b-a;
    }

    return a;
}
int main()
{
    int num;
    printf("enter the number for fabonacci series \n");
    scanf("%d",&num);
    printf("the fabonacci series by recursive method of %d is %d \n",num,fib_itretive(num));
    printf("the fabonacci series by iterative method of %d is %d \n",num,fib_recursive(num));
    return 0;
}
