#include <stdio.h>

int main() {
  float radius, area;

  printf("enter radius");
  scanf("%f",&radius);

  area = 4*3.141*radius*radius;

  printf("the are of the sphere is:%.2f\n", area);

  return 0;
  }
