#include<stdio.h>
int main ()
{
    int b,h;
    float area;
    printf("ENTER BASE OF TRIANGLE;");
    scanf("%d",&b);
    printf("\nENTER HEIGHT OF TRIANGLE;");
    scanf("%d",&h);
    area = (b * h) / 2;
    printf("\n AREA OF TRIANGLE = %f,"area);
    return 0;
}
