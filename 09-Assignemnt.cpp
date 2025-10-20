/*Implement Coin Change problem. Statement: - Given an integer array 
of coins [ ] of size N representing different types of currency and an 
integer sum, The task is to find the number of ways to make sum by 
using different combinations from coins[].
*/

#include <iostream>
using namespace std;

int main() {
    int n, sum;


    cout << "Enter number of coins: ";
    cin >> n;

    int coins[n];
    cout << "Enter coin values: ";
    for(int i = 0; i < n; i++) {
        cin >> coins[i];
    }
 

    cout << "Enter the sum: ";
    cin >> sum;

    int dp[sum+1];
    for(int i = 0; i <= sum; i++)
        dp[i] = 0;

    dp[0] = 1;  

 
    for(int i = 0; i < n; i++) {
        for(int j = coins[i]; j <= sum; j++) {
            dp[j] = dp[j] + dp[j - coins[i]];
        }
    }

    
    cout << "Number of ways to make sum " << sum << " = " << dp[sum] << endl;

    return 0;
}




/*
Enter number of coins: 3
Enter coin values: 1 2 3
Enter the sum: 4
Number of ways to make sum 4 = 4
*/
