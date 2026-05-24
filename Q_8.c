#include <stdio.h>

float circleArea(float r) {
    return 3.14159 * r * r;
}

float circleCircumference(float r) {
    return 2 * 3.14159 * r;
}

int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    printf("Area: %.2f\n", circleArea(radius));
    printf("Circumference: %.2f\n", circleCircumference(radius));
    return 0;
}
