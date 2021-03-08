#include<iostream>
#include<string>
#include <iomanip>

using namespace std;

string remainingwords(string s) { 
    int counter = 0;
    for (char x : s)  
    { 
        if (x == ' ') 
        { 
            break;
        } 
        else { 
            counter++; 
        } 
    }

    string word = "";
    for (int i = counter + 1; i < s.length(); i++) {
        word = word + s[i];
    }
    return word;
}