#include <stdio.h>
int main() 
{
    float r, area;
    scanf("%f", &r);
    area = 3.14*r*r;
    printf("The area of the circle is: %.2f\n", area);
    return 0;
}