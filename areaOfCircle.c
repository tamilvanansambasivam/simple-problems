#include<stdio.h>
int main()
{
     /* variable declaration part */
     int r;
     float area;
     /* Reading part */
     printf("Enter Radius : ");
     scanf("%d",&r);
     /* Processing part */
     area=3.14*r*r;
     /* Output part */
     printf("Area of Circle = %f\n",area);
     return 0;
}
