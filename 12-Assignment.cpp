/*Capstone Project: Develop and implement a solution for the 
given problem using dynamic programming approach.
The project should be coded on a chosen programming platform and 
all code must be updated and maintained in a GitHub repository for 
version control and collaboration.*/

#include <bits/stdc++.h>
using namespace std;

// Solve 0/1 knapsack and return pair<maxValue, chosenItemIndices>
// weights and values are 1-based (index 1..n)
pair<int, vector<int>> solveKnapsack(int n, int W, const vector<int>& weight, const vector<int>& value) {
    // dp[i][w] = max value using first i items with capacity w
    // We will build table of size (n+1) x (W+1)
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int cap = 0; cap <= W; ++cap) {
            // do not take item i
            int option1 = dp[i - 1][cap];
            int option2 = 0;
            if (cap >= weight[i]) {
                // take item i
                option2 = dp[i - 1][cap - weight[i]] + value[i];
            }
            dp[i][cap] = max(option1, option2);
        }
    }

    int maxValue = dp[n][W];

    // Reconstruction: find which items were taken
    vector<int> chosenIndices;
    int cap = W;
    for (int i = n; i >= 1; --i) {
        if (dp[i][cap] != dp[i - 1][cap]) {
            // item i was taken
            chosenIndices.push_back(i); // store 1-based index
            cap -= weight[i];
        }
        // else item i not taken
    }

    // chosenIndices currently in reverse order (from n..1), reverse it if you want
    reverse(chosenIndices.begin(), chosenIndices.end());
    return make_pair(maxValue, chosenIndices);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, W;
    if (!(cin >> n >> W)) {
        // invalid input
        return 0;
    }

    // Use 1-based arrays for simplicity
    vector<int> weight(n + 1), value(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> weight[i] >> value[i];
    }

    pair<int, vector<int>> result = solveKnapsack(n, W, weight, value);

    cout << result.first << "\n"; // maximum value
    cout << result.second.size();
    for (int idx : result.second) {
        cout << " " << idx;
    }
    cout << "\n";
    return 0;
}


/*

INPUT:-4 7
1 1
3 4
4 5
5 7

Output:-9
2 2 3
*/
