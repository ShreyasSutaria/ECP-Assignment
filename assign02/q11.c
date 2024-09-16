/* Write a program to accept a point in Cartesian co-ordinate system and decide the quadrant in
which the point lies. Also check for special cases point lies on +- x axix -+y axis , 0 ii */

#include <stdio.h>

int main() {
    float x, y;

    printf("Enter x-coordinate: ");
    scanf("%f", &x);
    printf("Enter y-coordinate: ");
    scanf("%f", &y);

  
    if (x == 0 && y == 0) {
        printf("The point lies at the origin.\n");
    }
  
    else if (x == 0) {
        printf("The point lies on the y-axis.\n");
    }
 
    else if (y == 0) {
        printf("The point lies on the x-axis.\n");
    }
  
    else if (x > 0 && y > 0) {
        printf("The point lies in the first quadrant.\n");
    }
  
    else if (x < 0 && y > 0) {
        printf("The point lies in the second quadrant.\n");
    }
 
    else if (x < 0 && y < 0) {
        printf("The point lies in the third quadrant.\n");
    }
   
    else if (x > 0 && y < 0) {
        printf("The point lies in the fourth quadrant.\n");
    }

    return 0;
}
