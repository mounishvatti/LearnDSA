#include <bits/stdc++.h>
using namespace std;

int BuySellStock(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans;
    int maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        int buy = arr[i];
        int profit = 0;
        for (int j = i + 1; j < n; j++)
        {
            int sell = arr[j];
            profit = sell - buy;
            maxProfit = max(maxProfit, profit);
        }
    }

    return maxProfit;
}

void approach2(vector<int>&arr){
    int n = arr.size();
    int mini = arr[0];
    int profit = 0;

    for(int i=1; i<n; i++){
        int cost = arr[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, arr[i]);
    }
    cout << "Overall profit = " << profit << endl;
}

int main()
{
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    cout << BuySellStock(arr) << endl;
    approach2(arr); 
}