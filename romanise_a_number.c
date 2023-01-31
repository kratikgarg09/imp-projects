  /* Convert a year into its roman equivalent*/
#include <stdio.h>
#include <conio.h>
int romanise(int y, int k , char ch);
int main()
{
    int yr;
    printf("Enter the number which you want to romanise \n");
    scanf("%d",&yr);
    yr = romanise(yr,1000,'m');/* Series of function call*/
    yr = romanise(yr,500,'d');
    yr = romanise(yr,100,'c');
    yr = romanise(yr,50,'l');
    yr = romanise(yr,10,'x');
    yr = romanise(yr,5,'v');
    yr = romanise(yr,1,'i');
    printf("\n\n\n\n press any key to exit");
    getch();
}

int romanise(int y, int k , char ch)
{
    int i,j;
    if (y==9)
    {
        printf("ix");
        return (y%9);
    }
    if(y==4)
    {
        printf("iv");
        return (y%4);
    }
    j=y/k;
    for(i=1;i<=j;i++)
        printf("%c",ch);
    return(y-k*j);
}
