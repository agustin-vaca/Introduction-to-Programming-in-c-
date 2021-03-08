#include<iostream>

using namespace std;

char input;

int main ()
{
    cout << "Enter a character: ";
    cin >> input;

    if (int(input) >= 48 && int(input) <= 57) {
        cout << input << " is a digit.";
    }
    else if (int(input) >= 65 && int(input) <= 90) {
        cout << input << " is an upper case letter.";
    }
    else if (int(input) >= 97 && int(input) <= 122) {
        cout << input << " is a lower case letter.";
    }
    else {
        cout << input << " is a non-alphanumeric  character.";
    }
}