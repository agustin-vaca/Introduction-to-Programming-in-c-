#include<iostream>
#include<string> 

using namespace std;

string oddPhrase;
int middleIndex;
char middle;
string firstHalf;
string secondHalf;

int main ()
{
    cout << "Enter an odd length string: ";
    getline(cin, oddPhrase);
    middleIndex = (oddPhrase.length() - 1)/2;
    middle = oddPhrase[middleIndex];

    for (int i = 0; i < middleIndex; i++) {
        firstHalf = firstHalf + oddPhrase[i];
    }

    for (int i = middleIndex + 1; i < oddPhrase.length(); i++) {
        secondHalf = secondHalf + oddPhrase[i];
    }

    cout << "Middle character: " << middle;
    cout << " First half: " << firstHalf;
    cout << " Second half: " << secondHalf;

}