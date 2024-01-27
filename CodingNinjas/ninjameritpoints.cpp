#include <iostream>
#include <vector>
using namespace std;

int maxMeritPoints(vector<vector<int>>& points) {
    int n = points.size();
    
    if (n == 0 || points[0].size() != 3) {
        return 0; // Invalid input
    }

    // dp[i][j] represents the maximum merit points after ith day, where j is the activity index (0, 1, 2)
    vector<vector<int>> dp(n, vector<int>(3, 0));

    // Initialize the first day's values
    for (int j = 0; j < 3; j++) {
        dp[0][j] = points[0][j];
    }

    // Iterate over the days
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            // Find the maximum points for the current day's activity, considering the constraint
            for (int k = 0; k < 3; k++) {
                if (j != k) {
                    dp[i][j] = max(dp[i][j], dp[i - 1][k] + points[i][j]);
                }
            }
        }
    }

    // Find the maximum points on the last day
    int result = max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2]));

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> points(n, vector<int>(3, 0));

    // Input the points array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> points[i][j];
        }
    }

    // Calculate and print the maximum merit points
    int maxPoints = maxMeritPoints(points);
    cout << maxPoints << endl;

    return 0;
}
