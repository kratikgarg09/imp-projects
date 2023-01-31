#include <stdio.h>
void starpattern(int rows)
{
    if (rows == 1)
        printf("* \n");
    starpattern(rows - 1);
    // for (int i=0; i<rows; i++)
    //{
    for (int j = 0; j <= (2 * rows - 1); j++)
    {
        printf("*");
    }
    printf("\n");
    //}
}
void reverse_starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows, type;
    printf("enter 0 for star pattern and 1 for reverse star pattern\n\n");
    scanf("%d", &type);
    switch (type)
    {
    case 1:
        printf("enter the no. of rows which you want in star pattern \n\n");
        scanf("%d", &rows);
        reverse_starpattern(rows);
        break;

    case 0:
        printf("enter the no. of rows which you want in star pattern \n\n");
        scanf("%d", &rows);
        starpattern(rows);
        break;

    default:
        printf("you have entered an invalid choice\n\n");
        break;
    }
    return 0;
}
