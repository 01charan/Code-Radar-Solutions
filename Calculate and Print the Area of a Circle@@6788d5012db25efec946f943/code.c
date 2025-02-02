#include <stdio.h>
#define pi 3.14
char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float radius, area;
    printf("Enter the radius of circle:");
    scanf("%f", &radius);
    area = pi*radius*radius;
    printf("The area of the circle with radius %.2f is: %.2f\n",radius, area);
    return 0;
}