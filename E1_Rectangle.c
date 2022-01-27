#include <stdio.h>

// create a C program that displays the perimeter and area of a rectangle
// perimeter = 2.0 * (width + height)
// area = width * height

int main()
{
    float width, height, perimeter, area;

    printf("RECTANGLE PERIMETER & AREA CALCULATOR\n\n");

    printf("Insert width: ");
    scanf("%f", &width);
    printf("Insert height: ");        
    scanf("%f", &height);

    perimeter = 2.0 * (width + height);
    area = width * height;

    printf("Perimeter = %.2f\n", perimeter);
    printf("Area = %.2f\n", area);

    return 0;
}