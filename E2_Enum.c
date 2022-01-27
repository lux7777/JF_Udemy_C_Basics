#include <stdio.h>

// create a C program that defines an enum type and uses that type to display the values of some variables
// the program should create an enum type named Company
// valid values for this type are GOOGLE, FACEBOOK, XEROX YAHOO, EBAY, MICROSOFT
// the program should create three variables of the above enum type that are assigned values: XEROX, GOOGLE, EBAY
// the program should display as output, the value of the three variables with each variable separated by a new line

int main()
{
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum Company xeCompany, goCompany, ebCompany;

    xeCompany = XEROX;
    goCompany = GOOGLE;
    ebCompany = EBAY;

    printf("The value of XEROX = %d\n", xeCompany);
    printf("The value of GOOGLE = %d\n", goCompany);
    printf("The value of EBAY = %d\n", ebCompany);

    return 0;
}