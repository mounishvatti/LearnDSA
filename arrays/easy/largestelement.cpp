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

// Brute force method; 
// Sort the elements of the array and print the last element, arr[size-1];
// O(n*logn);

// Solution to optimal method: O(n);

int main(){

    const int size = 5;
    int arr[size] = {3,2,9,1,6};
     
    int largest = arr[0];

    for(int i=1; i<size; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout << largest;

    return 0;
}