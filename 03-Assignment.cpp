/*Implement a problem of smallest number with at least no trailing 
zeroes in factorial. 
Statement: Given a number n. The task is to find the smallest number 
whose factorial contains at least n trailing zeroes.*/


#include<iostream>
using namespace std;

int main() {
    int n;//accepting number of zeros
    cout << "Enter how many trailing zeros are required: ";
    cin >> n;      

    int N = (n * 5) - 1;
    int result;
    

    for (int i = 1; i <= N; i++) {

        result = 1;

        for (int j = 1; j <= i; j++) {
            result = result * j;
        }

        int temp = result;
        int count = 0;

        while (temp % 10 == 0 ) {
            count++;
            temp = temp / 10;
        }

        if (count == n || count == n-1) {
            cout << "The first number whose factorial has " << n << " trailing zeros is: " << i << endl;
          
            break;
        }
    }
    return 0;
}


