#include <stdio.h>
#include <limits.h>  // For limits of integer types
#include <stdint.h>  // For fixed-width integer types

int main() {
    // Printing the header of the table
    printf("DataType      Size      Format Specifier    Range\n");
    printf("---------------------------------------------------\n");

    // Printing ranges for char
    printf("char          %lu        %%c                  %d to %d\n", sizeof(char), SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char %lu        %%c                  0 to %u\n", sizeof(unsigned char), UCHAR_MAX);

    // Printing ranges for short
    printf("short         %lu        %%d                  %d to %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("unsigned short%lu        %%u                  0 to %u\n", sizeof(unsigned short), USHRT_MAX);

    // Printing ranges for int
    printf("int           %lu        %%d                  %d to %d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("unsigned int  %lu        %%u                  0 to %u\n", sizeof(unsigned int), UINT_MAX);

    // Printing ranges for long
    printf("long          %lu        %%ld                 %ld to %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("unsigned long %lu        %%lu                 0 to %lu\n", sizeof(unsigned long), ULONG_MAX);

    return 0;
}

