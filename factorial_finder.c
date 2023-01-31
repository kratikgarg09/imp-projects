#include <stdio.h>
int factorial(int number)
{
    if (number==1|| number==0){
        return 1;
    }

else {
    return(number*factorial(number-1));
}
}

int iterative(int n)
{
    int result = 1;
    int i;
    for (i = 1;i<n+1;i++)
    {
        result = result*i;
    }
    return result;
}


int main()
{
    int num;
    printf("enter the number you want the factorial:\n");
    scanf("%d",&num);
    printf("the factorial of %d is %d \n",num,factorial(num));
    printf("the factorial of %d is %d \n",num,iterative(num));

    return 0;
}
