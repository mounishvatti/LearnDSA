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
    const int size = 6;
    int arr[size] = {13,46,24,52,20,9};
    for (int i = 0; i <= size-1 ; i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

// O(N^2) - worst/avg case 
// O(N) - best case