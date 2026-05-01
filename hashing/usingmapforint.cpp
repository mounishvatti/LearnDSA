#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <array>
#include <utility>
#include <numeric>
#include <limits>
#include <climits>
#include <cmath>
using namespace std;

int main(){
    int size;
    cin >> size;
    map<int, int> mpp;
    int array[size];
    for(int i=0;i<size;i++){
        cin >> array[i];
        mpp[array[i]]++;    //precompute
    }

    cout << "Enter the number of integers to be searched for: ";
    int x;
    cin >> x;
    cout << "Enter the integers: ";

    while (x--)
    {
        int num;
        cin >> num;
    //fetch
        cout << mpp[num] << endl;
    }

    return 0;
}