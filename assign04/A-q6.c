/*Write a function to print Pascal triangle of given number of rows. */

#include<stdio.h>
void pascal_triangle(int n)
{
    for (int line = 1; line <= n; line++) 
	{
        for (int space = 1; space <= n - line; space++)
            printf("  ");
        // used to represent C(line, i)
        int coef = 1;
        for (int i = 1; i <= line; i++) 
		{
            // The first value in a line
            // is always 1
            printf("%4d", coef);
            coef = coef * (line - i) / i;
        }
        printf("\n");
    }
}

// Driver code
int main()
{
    int n = 5;
    printPascal(n);
    return 0;
}
