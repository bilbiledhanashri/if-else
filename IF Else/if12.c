#include<stdio.h>
void main()
{
   float area,perimeter,side;
   printf("Enter the side of square :");
   scanf("%f",&side);
   area=side*side;
   perimeter=4*side;
   printf("perimeter=%f and area=%f",perimeter,area);
   return 0;
 }
