#include <stdio.h>
#include <float.h>  // For limits of floating-point types

int main() {
    // Printing the header of the table
    printf("DataType        Size      Format Specifier    Min Value                          Max Value\n");
    printf("----------------------------------------------------------------------------------------------\n");

    // Printing ranges for float
    printf("float           %lu        %%f, %%g, %%e, %%E   %e to %e\n", sizeof(float), FLT_MIN, FLT_MAX);

    // Printing ranges for double
    printf("double          %lu        %%f, %%g, %%e, %%E   %e to %e\n", sizeof(double), DBL_MIN, DBL_MAX);

    // Printing ranges for long double
    printf("long double     %lu        %%Lf, %%Lg, %%Le, %%LE %Le to %Le\n", sizeof(long double), LDBL_MIN, LDBL_MAX);

    return 0;
}

