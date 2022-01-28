#include <stdio.h>

// create a C program that displays the byte size of basic data types supported in c
// display the byte size of the following type: int, char, long, long long, double, long double

int main()
{
    printf("Variables of type char occupy %lu\n", sizeof(char));
    printf("Variables of type short occupy %lu\n", sizeof(short));
    printf("Variables of type int occupy %lu\n", sizeof(int));
    printf("Variables of type long occupy %lu\n", sizeof(long));
    printf("Variables of type long long occupy %lu\n", sizeof(long long));
    printf("Variables of type long float occupy %lu\n", sizeof(float));
    printf("Variables of type long occupy %lu\n", sizeof(double));
    printf("Variables of type long double occupy %lu\n", sizeof(long double));

    return 0;
}