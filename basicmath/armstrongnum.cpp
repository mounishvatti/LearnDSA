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
    int n;
    cout << "enter any integer: ";
    cin >> n;
    int digits = log10(n)+1;
	int armnum = 0;
	int dup = n;

	while(n>0){
		int ld = n % 10;
		armnum += pow(ld,digits);
		n/=10;
	}

	if(dup == armnum){
		cout << "true";
	}

	else cout << "false";

    return 0;
}