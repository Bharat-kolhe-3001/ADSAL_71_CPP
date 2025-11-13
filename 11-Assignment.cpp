/*
Implement Check if it is possible to transform one string to another. 
Statement: - Given two strings s1 and s2 (all letters in uppercase). 
Check if it is possible to convert s1 to s2 by performing following 
operations. 1. Make some lowercase letters upper. 2. Delete all the 
lowercase letters
*/

#include <iostream>
#include <string>
using namespace std;

bool canTransform(string s1, string s2) {
    int i = 0, j = 0;

    while (i < s1.length()) {
        char c1 = s1[i];

       
        if (j < s2.length() && toupper(c1) == s2[j]) {
            i++;
            j++; 
        }
        else if (c1 >= 'a' && c1 <= 'z') {
           
            i++;
        }
        else {
          
            return false;
        }
    }

  
    return (j == s2.length());
}

int main() {
    string s1, s2;

    cout << "Enter first string (s1): ";
    cin >> s1;

    cout << "Enter second string (s2): ";
    cin >> s2;

    if (canTransform(s1, s2))
        cout << "YES, it is possible.\n";
    else
        cout << "NO, it is not possible.\n";

    return 0;
}
