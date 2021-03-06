#include<iostream>

using namespace std;

float kilos;
float height;
float bmi;

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
    cout << "Please enter weight in kilograms: ";
    cin >> kilos;

    cout << "Please enter height in meters: ";
    cin >> height;

    bmi = kilos / (height * height);

    cout << "BMI is: " << round(bmi);
    return 0;
}