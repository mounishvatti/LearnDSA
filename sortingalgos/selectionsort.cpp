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

// Time complexity: O(n^2);

void SelectionSort(int arr[], int n){
    for (int i = 0; i <= n-2; i++){
        int min_index = i; // assume the min index as 1st pos
        for (int j = i; j <= n-1; j++){
            if (arr[j] < arr[min_index]) min_index = j;
        }
        swap(arr[i], arr[min_index]);
    }
}

int main(){
    int arr[6] = {13, 46, 24, 52, 20, 9};
    int size = sizeof(arr)/sizeof(arr[0]);

    SelectionSort(arr,size);
    
    cout << "The sorted array is: ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}