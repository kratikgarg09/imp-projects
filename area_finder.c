#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float pi = 3.14285714245714;
float volume;
float rectangle(float a, float b)
{
    return a*b;
}

float circle(float a)
{
    return pi*a*a;
}

float square(float a)
{
    return a*a;
}

float cylinder(float r, float h)
{
    float a,b;
    a = 2*pi*r*h;
    b = 2*pi*r*r;
    return a+b;
}

float trapezium(float a,float b,float h)
{
    float g,c;
    g = a+b;
    c = g/2;
    return c*h;

}

int main()
{
    int q = 1;
    while(1)
    {
        int choice,choice1,choice2 ;
        float   length, height,width, radius,a,b;

        printf(" Enter 1 for area \n Enter 2 for volume \n Enter 3 for quit \n ");
        scanf("%d",&choice1);
        if (choice1 ==1)
        {
            printf(" press 1 for area of rectangle \n press 2 for area of circle \n press 3 for area of square \n press 4 for lateral surface area of cylinder \n press 5 for surface area of cylinder\n  press 6 for area of trapezium \n press 7 for area of triangle \n");
            scanf("%d",&choice);

            if (choice==1)
            {
                printf("Enter The length of rectangle \n");
                scanf("%f",&length);
                printf("Enter The width of rectangle \n");
                scanf("%f",&width);
                printf("area of rectangle is %f \n",rectangle(length, width) );
            }

            else if (choice==2)
            {
                printf("Enter the radius of circle \n");
                scanf("%f",&radius);
                printf("area of circle is %0.2f \n", circle(radius));
            }

            else if (choice==3)
            {
                printf("Enter the length of square");
                scanf("%f", &length);
                printf("area of square is  %f \n", square(length));
            }

            else if (choice==4)
            {
                printf("Enter the Radius of cylinder \n ");
                scanf("%f",&radius);
                printf("Enter the height of cylinder\n ");
                scanf("%f", &height);
                printf("Lateral surface area of cylinder is %f ", cylinder(radius, height));
            }

            else if (choice==5)
            {
                printf("Enter the Radius of cylinder \n ");
                scanf("%f",&radius);
                printf("Enter the height of cylinder\n ");
                scanf("%f", &height);
                printf("Whole surface area of cylinder is %f \n", cylinder(radius, height));
            }

            else if (choice==6)
            {
                printf("Enter the upper side length of trapezium\n ");
                scanf("%f",&a);
                printf("Enter the lower side length of trapezium\n ");
                scanf("%f", &b);
                printf("Enter the height of trapezium \n");
                scanf("%f",&height);
                printf("area of trapezium is %f \n", trapezium(a,b, height));
            }
            else if (choice == 7)
            {
                printf(" Enter the type of triangle \n press 1 for equilateral \n press 2 for isosceles \n");
                scanf("%d", &choice2);
                if (choice2 == 1)
                {
                    printf("Enter the length of triangle");
                    scanf("%f",&a);
                    printf("Area of equilateral triangle is %f \n",0.44*a*a );
                }
                else if(choice2 == 2)
                {
                    printf("Enter the hypotaneus of triangle");
                    scanf("%f",&a);
                    printf("Enter the base of triangle");
                    scanf("%f",&b);
                    int k,l,m,n,hb,area,h;
                    k = a*a;
                    l = b*b;
                    m = l/4;
                    n = k-m;
                    hb = sqrt(n);
                    h = b*hb;
                    area = h/2;
                    printf("Area of isosceles triangle is %f \n", area);
                }
            }
        }
        if (choice1 == 2)
        {
            printf(" press 1 for volume of cube\n press 2 for volume of cuboid \n press 3 for volume of cylinder \n  press 4 for volume of cone \n");
            scanf("%d",&choice);

            if (choice==1)
            {
                printf("Enter The length of any side of cube \n");
                scanf("%f",&length);
                volume = length*length*length;
                printf("volume of cube is %0.2f \n", volume);
            }

            else if (choice==2)
            {
                printf("Enter the length of cuboid \n");
                scanf("%f",&length);
                printf("Enter the width of cuboid \n");
                scanf("%f",&width);
                printf("Enter the width of cuboid \n");
                scanf("%f",&height);
                volume = length*width*height;
                printf("volume of cuboid is %0.2f \n", volume);
            }

            else if (choice==3)
            {
                printf("Enter the radius of cylinder");
                scanf("%f", &radius);
                printf("Enter the height of cylinder \n");
                scanf("%f",&height);
                volume = pi*radius*radius*height;
                printf("volume of cylinder is  %0.2f \n", volume);
            }

            else if (choice==4)
            {
                printf("Enter the Radius of cone \n ");
                scanf("%f",&radius);

                printf("Enter the length of cone\n ");
                scanf("%f", &length);
                int k,l,m,n;
                k= (length*length)+(radius*radius);
                height = sqrt(k);
                l = height/3;
                volume = pi*radius*radius*height/3;
                printf("volume of cone is %0.2f \n", volume);

            }
        }
        if (choice1 == 3)
        {
            break;
        }
    }
    return 0;
}

