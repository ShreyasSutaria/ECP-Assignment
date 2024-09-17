#include <stdio.h>
#include <math.h>

// Function to calculate the perimeter of the triangle
float calculatePerimeter(float a, float b, float c) {
    return a + b + c;
}

// Function to calculate the area of the triangle using Heron's formula
float calculateArea(float a, float b, float c) {
    float s = (a + b + c) / 2;  // Semi-perimeter
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

int main() {
    float a, b, c;
    float perimeter, area;

    // Input lengths of the sides of the triangle
    printf("Enter the length of side a: ");
    scanf("%f", &a);
    printf("Enter the length of side b: ");
    scanf("%f", &b);
    printf("Enter the length of side c: ");
    scanf("%f", &c);

    // Check if the given sides form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        perimeter = calculatePerimeter(a, b, c);
        area = calculateArea(a, b, c);

        // Output the results
        printf("For sides %.2f, %.2f, %.2f:\n", a, b, c);
        printf("Perimeter: %.2f\n", perimeter);
        printf("Area: %.2f\n", area);
    } else {
        // Output an error message if the sides do not form a valid triangle
        printf("The given lengths do not form a valid triangle.\n");
    }

    return 0;
}

