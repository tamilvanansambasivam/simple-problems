#include<stdio.h>
int main()
{
     int r;
     float volume_sphere;
     printf("Enter Radius : ");
     scanf("%d",&r);
     volume_sphere = (4/3.0)*3.14*r*r*r;
     printf("Volume of Sphere = %f\n",volume_sphere);
     return 0;
}
