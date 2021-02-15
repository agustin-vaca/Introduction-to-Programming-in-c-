#include<iostream>
#include <iomanip>

using namespace std;

double kilos;
double height;
double bmi;

float round(float var) 
{ 
    // 37.66666 * 100 =3766.66 
    // 3766.66 + .5 =3767.16    for rounding off value 
    // then type cast to int so value is 3767 
    // then divided by 100 so the value converted into 37.67 
    float value = (int)(var * 100 + .5); 
    return (float)value / 100; 
} 

int main ()
{
    cout << "Please enter weight in pounds: ";
    cin >> kilos;

    cout << "Please enter height in inches: ";
    cin >> height;

    kilos = kilos*0.453592;
    height = height*0.0254;
    
    bmi = kilos / (height * height);

    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    cout << "BMI is: " << round(bmi);
    return 0;
}