#include <stdio.h>

// create a C program that calculates your weekly pay
// the program should ask the user to enter the number of hours worked in a week via the keyboard
// the program should display as output the gross pay, the taxes, and the net pay
// basic pay rate = $12.00/hr
// overtime (in excess of 40 hours) = time and a half
// tax rate:
//   15% of the first $300
//   20% of the next $150
//   25% of the next 

#define WHW     40.00                   // working hours per week 
#define BPR     12.00                   // basic pay rate   
#define OT      18.00                   // overtime 
#define T1       0.15                   // first tax
#define T2       0.20                   // second tax
#define T3       0.25                   // third tax


int main()
{
    double nwh;                         // number of worked hours                                           
    double gp, tp, np;                  // gross pay, tax pay, net pay                         

    printf("Please enter the number of hours worked this week: ");
    scanf("%lf", &nwh);

    if (nwh <= WHW) {
        gp = nwh * BPR;
        if (gp <= 300) {
            tp = gp * T1;
            np = gp - tp;           
        } else if (gp > 300 && gp <= 450) {
            tp = 300 * T1 + (gp - 300) * T2;
            np = gp - tp;            
        } else {
            tp = 300 * T1 + (gp - 300) * T2 + (gp - 450) * T3;
            np = gp - tp;            
        }       
        printf("Your gross pay this week is: $%.2lf\nYour taxes this week is: $%.2lf\nYour net pay this week is: $%.2lf\n", gp, tp, np);  

    } else {
        gp = WHW * BPR + (nwh - WHW) * OT;
        tp = 300 * T1 + (gp - 300) * T2 + (gp - 450) * T3;
        np = gp - tp;
        printf("Your gross pay this week is: $%.2lf\nYour taxes this week is: $%.2lf\nYour net pay this week is: $%.2lf\n", gp, tp, np);
    }   

    return 0;
}
