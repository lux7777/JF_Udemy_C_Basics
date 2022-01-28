#include <stdio.h>

// create a C program that converts the number of minutes to days and years
// the program should ask the user to enter the number of minutes via the terminal
// the program should display as output the minutes and then its equivalent in years and days

int main()
{
    double minutes, days, years;

    printf("Insert minutes: ");
    scanf("%lf", &minutes);

    days = minutes / (60.0 * 60.0);
    years = minutes / (365.0 * 3600.0);

    printf ("%.f minutes is %f days\n", minutes, days); 
    printf ("%.f minutes is %f years\n", minutes, years); 

    return 0;
}