// Assign cookies to people

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int assignCookies(vector<int> cookies, vector<int> greed){
    int m = cookies.size();
    int n = greed.size();
    int l = 0, r = 0;

    sort(cookies.begin(), cookies.end()); // O(m log m)
    sort(greed.begin(), greed.end()); // O(n log n)

    while(l < m && r < n){ // O(m)
        if( greed[r] <= cookies[l] ){
            r+=1;
        }
        l+=1;
    }
    return r;

    // Total time complexity: O(m + m log m + n log n)
    // Space complexity: O(1)
}

int main(){
    vector<int> cookies = {4, 2, 1, 2, 1, 3};
    vector<int> greed = {1, 5, 3, 3, 4};

    cout << assignCookies(cookies, greed) << endl;
}