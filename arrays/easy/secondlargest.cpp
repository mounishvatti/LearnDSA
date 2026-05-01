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

// Second largest element, most optimal method O(n);

int main() {
	
	int arr[9]  = {1,8,6,2,5,4,8,3,7};

	int largest = arr[0];
	int second_largest = 0;

	for(int i=1; i<9; i++){
		if(arr[i]>largest){
			largest = arr[i];
		}
		if(arr[i]>second_largest && arr[i]!=largest){
			second_largest = arr[i];
		}
	}

	cout << largest << " " << second_largest;

    return 0;
}
