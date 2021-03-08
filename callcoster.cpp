#include<iostream>
#include<stdio.h> 
#include<string.h> 
#include<iomanip>

using namespace std;

char day[3];
int timeOfDay;
int duration;
float total;

int main ()
{
    cout << "Enter the day the call started at: ";
    cin >> day;

    cout << "Enter the time the call started at (hhmm): ";
    cin >> timeOfDay;

    cout << "Enter the duration of the call (in minutes): ";
    cin >> duration;

    if (strcmp("Sat", day) == 0 || strcmp("Sun", day) == 0) {
        total = duration * 0.15;
    }
    else if (timeOfDay > 800 && timeOfDay < 1800) {
        total = duration * 0.4;
    }
    else {
        total = duration * 0.25;
    }

    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    cout << "This call will cost $" << total;
}