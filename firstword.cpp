#include<iostream>
#include<string>
#include <iomanip>

using namespace std;

string firstword(string s) { 
    string word = "";
    for (char x : s)  
    { 
        if (x == ' ') 
        { 
            return word; 
        } 
        else { 
            word = word + x; 
        } 
    } 
}