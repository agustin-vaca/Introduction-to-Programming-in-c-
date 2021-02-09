#include<iostream>

using namespace std;

int quarterNumber;
int dimeNumber;
int nickelNumber;
int pennyNumber;
int total;
int dollars;

int main ()
{
    cout<<"# of quarters: ";
    cin>>quarterNumber;

    cout<<"# of dimes: ";
    cin>>dimeNumber;

    cout<<"# of nickels: ";
    cin>>nickelNumber;

    cout<<"# of pennies: ";
    cin>>pennyNumber;

    total = quarterNumber*25 + nickelNumber*5 + dimeNumber*10 + pennyNumber*1;
    dollars = total/100;
    total = total - dollars*100;
    cout<<"The total is "<<dollars<<" dollars and "<<total<<" cents";

    return 0;
}