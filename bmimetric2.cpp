#include<iostream>
#include<string>

using namespace std;

float kilos;
float height;
float bmi;
string status;


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
    if (bmi >= 30.0) {
        status = "Obese";
    }
    else if (bmi >= 25.0) {
        status = "Overweight";
    }
    else if (bmi >= 18.5) {
        status = "Normal";
    }
    else {
        status = "Underweight";
    }

    cout << "BMI is: " << round(bmi) << ", Status is " << status;
    return 0;
}