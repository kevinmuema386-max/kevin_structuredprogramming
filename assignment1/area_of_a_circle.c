#include <stdio.h>

int main()
{
    float radius, area;

    printf("Enter the radius of the circle");
    scanf("%f", &radius);

    area = 3.141*radius*radius;

    printf("The area is:%.2f\n", area);

    return 0;

}
