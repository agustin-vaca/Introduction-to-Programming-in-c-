#include<iostream>
#include<string>
#include <iomanip>

using namespace std;

int first;
int second;
float basePrice;
float notDiscounted;
float discounted;
float totalAfterDiscounts;
float totalAfterTax;
float tax;
char clubCard;

int main ()
{
    cout << "Enter price of the first item: ";
    cin >> first;

    cout << "Enter price of the second item: ";
    cin >> second;

    if (first < second) {
        discounted = first / 2;
        notDiscounted = second;
    }
    else {
        discounted = second / 2;
        notDiscounted = first;
    }

    cout << "Does customer have a club card? (Y/N): ";
    cin >> clubCard;

    if (clubCard == 'n') {
        totalAfterDiscounts = discounted + notDiscounted;
    }
    else {
        totalAfterDiscounts = (discounted + notDiscounted) * 0.9;
    }

    cout << "Enter tax rate, e.g. 5.5 for 5.5\% tax: ";
    cin >> tax;

    totalAfterTax = totalAfterDiscounts * (1 + tax*0.01);

    basePrice = first + second;

    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    cout << " base price = " <<basePrice<< " price after discounts = " <<totalAfterDiscounts<< " Total price = " << totalAfterTax;
}