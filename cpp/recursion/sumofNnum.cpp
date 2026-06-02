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

int printSum(int i, int sum){
    if(i < 1) return sum;
    
    return printSum(i-1,sum+i);
}

int main(){
    int num = 5;
    cout << printSum(5,0);

    return 0;
}

