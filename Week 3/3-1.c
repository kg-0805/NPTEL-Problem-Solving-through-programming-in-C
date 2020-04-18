#include <stdio.h>
#define PI 3.14
void main()
{
    int radius;
    float area;
    /* Enter the radius of a circle */
    scanf("%d", &radius);

area = PI * radius * radius;


printf("Area of a circle = %5.2f\n", area);
}
