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


