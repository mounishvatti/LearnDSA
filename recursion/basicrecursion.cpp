// print upto N numbers using recursion

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

int i = 0;

void print(){

    if(i == 3){
        return;
    }
    
    cout << i << endl;
    i++;

    print();
    
}

int main(){
    print();
}