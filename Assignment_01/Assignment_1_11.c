// write a program to print ranges for float, double, and long double. Use <float.h>.“float” numbers can be printed using %f, %g, %e, %E.



#include <stdio.h>

#include <limits.h>

#include <float.h>

int main()

{

    printf("Data Type               Size   Format Specifier            Range       \n");
    printf("signed char             %lu         %%c                  [%d to %d].   \n", sizeof(char), SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char           %lu         %%c                  [%u to %u].   \n", sizeof(unsigned char), 0, UCHAR_MAX);
    printf("signed short int        %lu         %%hd                 [%hd to %hd]. \n", sizeof(short int), SHRT_MIN, SHRT_MAX);
    printf("unsigned short int      %lu         %%hu                 [%hu to %hu]. \n", sizeof(unsigned short int), 0, USHRT_MAX);
    printf("signed int              %lu         %%d                  [%d to %d].   \n", sizeof(int), INT_MIN, INT_MAX);
    printf("unsigned int            %lu         %%i                  [%u to %u].   \n", sizeof(unsigned int), 0, UINT_MAX);
    printf("signed long int         %lu         %%ld                 [%ld to %ld]. \n", sizeof(long int), LONG_MIN, LONG_MAX);
    printf("unsigned long int       %lu         %%lu                 [%lu to %lu]. \n", sizeof(unsigned long int), 0, ULONG_MAX);
    printf("float                   %lu         %%f                  [%e to %e]    \n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("double                  %lu         %%ld                 [%e to %e].   \n", sizeof(double), DBL_MIN, DBL_MAX);
    printf("long double             %lu         %%Lf                 [%e to %e].   \n", sizeof(long double), LDBL_MIN, LDBL_MAX);

    return 0;

}
