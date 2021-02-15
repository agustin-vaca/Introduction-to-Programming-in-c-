#include<iostream>

using namespace std;

int dollars;
int cents;
int total;
int quarters;
int dimes;
int nickels;
int pennies;

int main ()
{
    cout << "Please enter the amount of money to convert: " << endl << endl;

    cout << "# of dollars: ";
    cin >> dollars;

    cout << "# of cents: ";
    cin >> cents;

    total = dollars*100 + cents;
    
    quarters = total/25;
    total = total - quarters*25;

    dimes = total/10;
    total = total - dimes*10;

    nickels = total/5;
    total = total - nickels*5;

    cout << "The coins are: " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, and " << total << " pennies.";
    return 0;
}