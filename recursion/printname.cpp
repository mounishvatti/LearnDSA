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

void printName(int i,int n){
    if(i>n){
        return;
    }

    cout << "Mounish" << endl;
    i++;

    printName(i,n);
}

int main(){
    int n;
    cout << "Enter: ";
    cin >> n;

    printName(1,n);

    return 0;
}