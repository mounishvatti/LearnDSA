#include<bits/stdc++.h>
using namespace std;

vector<int> checkMax(vector<pair<int, int>>& arr) {
    int maxDifference = INT_MIN; // Initialize to the smallest possible integer
    int index1 = -1;
    int index2 = -1;
    vector<int> v;
    for (int i = 0; i < arr.size(); i++) {
        int difference = arr[i].second - arr[i + 1].second;
        if (difference > maxDifference) {
            maxDifference = difference;
            v.push_back(arr[i].first);
            v.push_back(arr[i + 1].first);
        }
    }
    
    return v;
}

int main(){
    vector<pair<int,int>> v;

    // <house_number, position of house>
    v.push_back({3,7}); 
    v.push_back({1,9}); 
    v.push_back({2,0}); 
    v.push_back({5,15});
    v.push_back({4,30});

    auto compareBySecond = [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.second < b.second;
    };

    sort(v.begin(), v.end(), compareBySecond);

    vector<int>result;
    result = checkMax(v);
    int size = result.size();

    // cout << size;
    cout << result[size-2] << " & " << result[size-1] << endl;
    return 0;
}
